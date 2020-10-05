# EchoEssentia

EchoEssentia kiosk IoT

## Table of Contents

- [About](#about)
- [Solution](#solution)
- [Technology](#technology)
- [Links](#links)
- [Team](#team)

## About

Despite the fact that consumers are shifting their habits and shopping more online - especially during the Covid-19 pandemic,
how can we improve their experience during in-store shopping? How can we attract them back after we control this global issue?

That was the main question to be addressed for the Hackathon [Eugenio Challenge Hub + Natura](https://www.eugeniochallengehub.io/).

## Solution

In 2020, [Natura](https://www.naturabrasil.com/) was considered one of the most
[sustainable companies](https://www.corporateknights.com/reports/2020-global-100/2020-global-100-ranking-15795648/)
in the world. So considering the current world scenario and Natura values, we developed a solution that can create a huge impact
for the environment and the personal care industry.

It's self-service kiosk with refill for fragrances to be installed inside Natura stores. The initial solution consists of
a PWA to run on a tablet and integration with our hardware which fills the recipients.

You can learn more about our solution [here - add link to pitch](), [here - add link to pdf]() and [here - add link to landing]()

You can see the prototype of our solution [here - add link to demo]().

## Technology

This repository contains the source code in C++ for the MCU. The microcontroller used was an ESP32.

It has been built using PlatformIO extension and their libraries.

The communication with the app is through MQTT Broker [Eugenio](https://eugenio.io/). Eugenio send a command through MQTT protocol containing a payload with the liquid quantity and choosen product. After the payload is received, the dispenser actuator is turned on and the device refill the reusable bottle.

## Links

Website:
https://sites.google.com/view/echoessentia/home?authuser=0 
Demo video:
https://youtu.be/zvOasAS7lTA
presentation PDF:
https://drive.google.com/file/d/1rKgvk1E4whNaGfqR0ASxB4Jq7HqpwqxP/view?usp=sharing
App:
https://github.com/fernandoteruo/echoessentia

## Team

1. Fernando Maeji
2. Juliana Vivacqua
3. Laís Miho
4. Fabio Saito
5. Lawson Daiki
