# Wemos Lolin D32 PCB addon
This is a simple PCB for the Lolin D32, to learn and prototype your projects.
![Alt text](pictures/3drendering.png?raw=true "3D Rendering")

---

## Features
- 4 buttons (input)
- 4 LEDs (output)
- DIP Switch to disconnect onboard buttons and LEDs
- I2C 0.96" OLED
- 2 peripherals ports
- 2 power ports (not really functional in v1.1)

## Assigned pins
#### Digital in and outputs
| description | Pin No. |
|-------------|---------|
| Button 1    | 0       |
| Button 2    | 4       |
| Button 3    | 16      |
| Button 4    | 17      |
| LED 1       | 13      |
| LED 2       | 45      |
| LED 3       | 14      |
| LED 4       | 27      |

#### SPI / I2C / Serial
| description | Pin No. |
|-------------|---------|
| SPI_CSO     | 5       |
| SPI_CLK     | 18      |
| SPI_MISO    | 19      |
| SPI_MOSI    | 23      |
| I2C_SDA     | 21      |
| I2C_SCL     | 22      |
| UART_TXD    | TX      |
| UART_RXD    | RX      |

## How to use
Refer to schematic and example code
