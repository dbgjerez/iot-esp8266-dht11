# (IOT) Internet of things with esp8266 and DHT-11 sensor

# Components
* NodeMCU
* DHT11 sensor
* Breadboard

# Architecture
![Architecture schema](schema/schema_v1.0.png)


# Configuration
| Variable | Default value | Description |
| ------ | ------ | ------ |
| DHT_PIN | D2 | Digital pin where is connected the data sensor output |
| DHTTYPE | DHT11 | Sensor version |
| DELAY | 5000 | Milliseconds between reading |

# Libraries 
* [DHT sensor](https://github.com/adafruit/DHT-sensor-library)
