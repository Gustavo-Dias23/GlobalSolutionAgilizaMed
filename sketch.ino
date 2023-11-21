#include <Wire.h>
#include <LiquidCrystal.h>
#include <WiFi.h>
#include <PubSubClient.h>

// Configurações do WiFi
const char *ssid = "Wokwi-GUEST";
const char *password = "";

// Configurações do servidor MQTT
const char *mqtt_broker = "broker.hivemq.com";
const int mqtt_port = 1883;
const char *mqtt_topic = "testtopic/FIAP/GlobalSolutionAgilizaMed/senhas";

// Pino do buzzer
const int buzzerPin = 5;

// Inicializa o objeto LiquidCrystal
LiquidCrystal lcd(19, 23, 18, 17, 16, 15);

// Objeto para comunicação MQTT
WiFiClient espClient;
PubSubClient client(espClient);

// Variável para armazenar a última mensagem
String ultimaMensagem = "";

// Função para lidar com mensagens MQTT recebidas
void callback(char *topic, byte *payload, unsigned int length) {
  Serial.print("Mensagem recebida no tópico ");
  Serial.print(topic);
  Serial.print(": ");
  
  ultimaMensagem = ""; // Limpa a última mensagem

  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
    ultimaMensagem += (char)payload[i];
  }
  Serial.println();

  // Exibe a última mensagem no display
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(0, 1);
  lcd.print(ultimaMensagem);

  // Toca o buzzer
  tone(buzzerPin, 1000, 500); // Frequência: 1000 Hz, Duração: 500 ms
}

void setup() {
  Serial.begin(115200);

  // Inicializa o LCD
  lcd.begin(16, 2);

  // Configuração do buzzer
  pinMode(buzzerPin, OUTPUT);

  // Conecta ao WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao WiFi...");
  }
  Serial.println("Conectado ao WiFi");

  // Configurações do servidor MQTT
  client.setServer(mqtt_broker, mqtt_port);
  client.setCallback(callback);

  // Conecta ao servidor MQTT
  while (!client.connected()) {
    Serial.println("Conectando ao servidor MQTT...");
    if (client.connect("esp32-client")) {
      Serial.println("Conectado ao servidor MQTT");
      client.subscribe(mqtt_topic);
    } else {
      Serial.print("Falha na conexão com o servidor MQTT. Retorno=");
      Serial.print(client.state());
      delay(2000);
    }
  }
}

void loop() {
  client.loop();
}
