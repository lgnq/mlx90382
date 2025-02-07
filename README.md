# mlx90382

[中文页](README_ZH.md) | English

## Introduction

This software package is a universal sensor driver package for Melexis's resolver sensors. And the new version of this software package has been connected to the Sensor framework, through the Sensor framework, developers can quickly drive this sensor.

## Support

| Contains equipment          | Accelerometer | Gyroscope | Magnetometer |
| --------------------------- | ------------- | --------- | ------------ |
| **Communication Interface** |               |           |              |
| SPI                         | √             | √         | √            |
| **Work Mode**               |               |           |              |
| Polling                     | √             | √         | √            |
| Interruption                |               |           |              |
| FIFO                        |               |           |              |
| **Power Mode**              |               |           |              |
| Power down                  | √             | √         | √            |
| Low power consumption       |               |           |              |
| Normal                      | √             | √         | √            |
| High power consumption      |               |           |              |
| **Data output rate**        |               |           |              |
| **Measuring Range**         | √             | √         | √            |
| **Self-check**              |               |           |              |
| **Multi-instance**          |               |           |              |

## Instructions for use

### Dependence

- RT-Thread 4.0.0+
- Sensor component
- SPI driver: mlx90382 devices use SPI for data communication, and need system SPI driver support;

### Get the package

To use the mlx90382 software package, you need to select it in the RT-Thread package management. The specific path is as follows:

```
RT-Thread online packages  --->
  peripheral libraries and drivers  --->
    sensors drivers  --->
      mlx90382: Universal 6-axis sensor driver package,support: accelerometer, gyroscope.
              Version (latest)  --->
```

**Version**: software package version selection

### Using packages

The initialization function of mlx90382 software package is as follows:

```
int rt_hw_mlx90382_init(const char *name, struct rt_sensor_config *cfg);
```

This function needs to be called by the user. The main functions of the function are:

- Device configuration and initialization (configure interface devices and interrupt pins according to the incoming configuration information);
- Register the corresponding sensor device and complete the registration of the mlx90382 device;

#### Initialization example

```
#include "sensor_melexis_mlx90382.h"

int rt_hw_mlx90382_port(void)
{
    struct rt_sensor_config cfg;

    cfg.intf.dev_name  = "spi10";

    rt_hw_mlx90382_init("mps", &cfg);

    return 0;
}
INIT_ENV_EXPORT(rt_hw_mlx90382_port);
```

## Precautions

No

## contact information

Maintenance man:

- [Eamon Fang](https://github.com/lgnq) 

- 主页：<https://github.com/lgnq/mlx90382>
