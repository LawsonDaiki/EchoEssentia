# EchoEssentia
Parte da solução do hackathon EUGENIO Challenge Hub.
Esse repositório contém a parte IoT da solução Echo Essentia.
O código foi feito pelo extensão PlatformIO, usando de referência o código do Artur Salo (https://github.com/artursarlo/eugenio-device-examples).
O microcontrolador usado foi o ESP32.
Primeiramente, o ESP32 se conecta a rede Wifi e em seguida se sincroniza o relógio NTP. Após essa configuração, é feita conexão com o Eugenio por meio do protocolo MQTT.
A conexão é feita 
