<h1 align="center"> AgilizaMed </h1>


## ⌨ Descrição  

O problema de filas longas em prontos-socorros é uma questão amplamente enfrentada em muitos sistemas de saúde ao redor do mundo. Pacientes que necessitam de atendimento urgente frequentemente se deparam com a frustração de esperas prolongadas, o que não apenas aumenta o desconforto do paciente, mas também coloca uma pressão adicional sobre os recursos já limitados dessas instituições médicas.
A espera em filas extensas pode resultar em agravamento das condições de saúde, além de gerar insatisfação e estresse nos pacientes e seus acompanhantes. Além disso, a ineficiência no processo de atendimento pode sobrecarregar os profissionais de saúde, prejudicando a qualidade do serviço prestado.
A solução proposta para enfrentar o desafio das filas longas em prontos-socorros é a criação de uma plataforma online que permita aos pacientes agilizar o processo de atendimento. Esta plataforma inovadora visa melhorar a experiência do usuário, proporcionando um método mais eficiente e conveniente para garantir atendimento médico urgente.
A plataforma propõe um sistema de login rápido e seguro, onde os usuários podem acessar a plataforma por meio de dispositivos móveis ou computadores. Uma vez logados, os pacientes têm a oportunidade de reservar uma senha virtual enquanto se dirigem ao pronto-socorro. Essa senha virtual é associada ao seu registro, agilizando o processo de triagem assim que o paciente chega ao local.


## 🗃 Funcionalidades
* <b>Monitor para visualização de senhas</b>: Conectado um ESP32 à rede WiFi, estabelece uma conexão MQTT com um servidor específico, e exibe mensagens recebidas no LCD, acompanhadas por um som do buzzer.


 ## 🔗 Tecnologias utilizadas
 * Linguagem de programação C;
 * Linguagem de programação Python;
 * Wokwi;
 * PyCharm;
 * Node-red;
 * HiveMQ;

 ## ⚙ Instruções
 * Abra o simulador Wokwi e carregue o arquivo diagram.json e o arquivo sketch.ino
 * Verifique se as bibliotecas no arquivo libraries.txt estão instaladas
 * Inicie o projeto
 * Caso não tenha node-red instalado na máquina:
   * Faça a instalação do Node.js
   * Abra o cmd e digite npm install -g --unsafe-perm node-red
 *  Digite no cmd: node-red
 *  Acesse: http://localhost:1880
 *  Importe o arquivo flows.json no node-red
 *  Configure os nodes para sua preferência de conexões
 *  Abra o https://www.hivemq.com/demos/websocket-client/
 *  Se inscreva no tópico "testtopic/FIAP/GlobalSolutionAgilizaMed/senhas"
 *  Baixe uma IDE de sua escolha pra rodar os arquivos na pasta CódigoPython
 *  Verifique se as bibliotecas json e paho-mqtt estão instaladas
 *  Inicialize o código
 *  Faça login como atendente no código
 *  Chame a próxima senha
 *  Veja as informações do simulador sendo mostradas no HiveMq e no ESP32
 *  Ou abra a dashboard do node-red e veja as informações lá
  

 ## ⚙ Rodando o projeto
Para rodar o projeto entre neste link:
https://wokwi.com/projects/381972638043436033
 
 ## ⚙ Ver o projeto
 Para ver o projeto entre neste link:
https://youtu.be/X66PNcRQd30
