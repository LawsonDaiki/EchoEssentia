# EchoEssentia
<p>Esse repositório contém parte da solução do hackathon EUGENIO Challenge Hub.</p>
<p>Aqui você vai encontrar a parte IoT do nosso projeto. Que engloba o microcontrolador, atuadores dos dispensers (que são acionados por meio de comandos enviados pela plataforma Eugenio), sensor RFID e o código.</p>
<p>O código foi feito por meio da extensão PlatformIO, usando de referência, o código do Artur Salo (https://github.com/artursarlo/eugenio-device-examples).
O microcontrolador usado foi o ESP32.</p>
<p>Primeiramente, o ESP32 se conecta a rede Wifi e em seguida sincroniza o relógio pelo NTP. Após essa configuração, é feita conexão com o Eugenio por meio do protocolo MQTT.
Quando um comando é acionado na plataforma Eugenio, o atuador do dispenser é acionado por 4 segundos (o que dá em torno de 100 ml), enchando o frasco com água.</p>
<p>Equipe:</p>
<p>Fabio Saito</p>
<p>Lawson Daiki Hamasaki</p>
<p>Juliana Vivacqua</p>
<p>Laís Miho</p>
<p>Fernando Maeji</p>
