/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2020  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
#warning **** user_config_override.h: Using Settings from this File ****


#ifndef USE_MLX90614
#define USE_MLX90614            // [I2cDriver32] Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
#endif

#ifndef USE_VL53L0X
#define USE_VL53L0X             // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
#endif

#ifndef USE_BME680
#define USE_BMP                                  // Add I2C code for BMP085/BMP180/BMP280/BME280 sensor (+4k code)
#define USE_BME680              // Add additional support for BME680 sensor using Bosch BME680 library (+4k code)
#endif

#ifndef USE_AS3935
#define USE_AS3935              // [I2cDriver48] Enable AS3935 Franklin Lightning Sensor (I2C address 0x03) (+5k4 code)
#endif


#endif  // _USER_CONFIG_OVERRIDE_H_
