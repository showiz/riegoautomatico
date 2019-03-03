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
