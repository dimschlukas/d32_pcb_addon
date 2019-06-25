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
| description | Pin No. | IO      |
|-------------|---------|---------|
| Button 1    | 2       | `INPUT` |
| Button 2    | 4       | `INPUT` |
| Button 3    | 16      | `INPUT` |
| Button 4    | 17      | `INPUT` |
| LED 1       | 13      | `Output`|
| LED 2       | 45      | `Output`|
| LED 3       | 14      | `Output`|
| LED 4       | 27      | `Output`|

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
