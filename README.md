# EchoEssentia
<p>Esse repositório contém parte da solução do hackathon EUGENIO Challenge Hub.</p>
<p>Aqui você vai encontrar a parte IoT do nosso projeto. Que engloba o microcontrolador, atuadores dos dispensers (que são acionados por meio de comandos enviados pela plataforma Eugenio), sensor RFID e o código.</p>
O código foi feito pelo extensão PlatformIO, usando de referência o código do Artur Salo (https://github.com/artursarlo/eugenio-device-examples).
O microcontrolador usado foi o ESP32.
Primeiramente, o ESP32 se conecta a rede Wifi e em seguida se sincroniza o relógio NTP. Após essa configuração, é feita conexão com o Eugenio por meio do protocolo MQTT.
A conexão é feita 
