# riegoautomatico
Sistema de riego automático 

ESPAÑOL:
Este sistema de riego automático tiene como principal objetivo el conocer la humedad por sector para generar un riego personalizado en el sector que menor humedad posea. Además, se utilizará un Raspberry PI 3 para monitorear en tiempo real el comportamiento de la humedad en los sensores, lo que permitirá observar de manera gráfica los tiempos en los cuales se activan los aspersores con las electroválvulas. 
La programación en Arduino está en C, y la programación para el gráfico en tiempo real está en Python 3 gracias a librería MatPlotLib.
La comunicación entre Arduino y Raspberry (Linux) se obtiene gracias al programa GRABSERIAL para Linux.

Los materiales para este proyecto son:

- Un Arduino UNO 
- Dos Sensores de humedad para Arduino (Moisture Sensor)
- Un Puente H para motor DC (Simulará la bomba de riego)
- Un Motor de 12V
- Un Diodo
- Un Capacitor de 1uF/50V
- Dos Relé de 24V (O de dos canales)
- Dos ElectroVálvulas de 24V
- Un Transformador 220V/24V
- Un Raspberry Pi 3

* La imagen de la configuración está en la misma carpeta llamado ´Proyecto Sensor de humedad2.jpg´

ENGLISH:
This automatic irrigation system has as principal task to know the moisture in different sectors to generate a custom irrigation  
in the area with less humidity. Also, we'll use a Raspberry Pi 3 to real time monitoring of the sensors behavior, this will provide us a graph to observe the times that the irrigation works thanks to the electrovalves. 
The main programming in Arduino is in C language, and the real time graph is in Python 3 thanks to the MatPlotLib library.
The comunication between Arduino and Raspberry (With Linux) works thanks to a software called GRABSERIAL available for Linux.

The materials for this project are:

- One Arduino UNO 
- Two Arduino Moisture Sensor
- One H bridge for DC motor (Simulates the irrigation bomb)
- One 12V motor
- One Diode
- One Capacitor 1uF/50V
- Two 24V Relay (Or one Relay with two channels)
- Two 24V Electrovalves
- One Power Voltage Transformer 220V/24V
- One Raspberry Pi 3

* The configure image is in this current folder called ´Proyecto Sensor de humedad2.jpg´
