/* ds18b20.h
 *
 * Copyright (C) 2016 Jacek Wieczorek
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef DS18B20_H
#define DS18B20_H

#include <inttypes.h>
#include "onewire.h"

#define DS18B20_ERROR_OK 	0
#define DS18B20_ERROR_CRC 	1
#define DS18B20_ERROR_COMM	2
#define DS18B20_ERROR_PULL 	3
#define DS18B20_ERROR_OTHER 4

extern uint8_t ds18b20request( volatile uint8_t *port, volatile uint8_t *direction, volatile uint8_t *portin, uint8_t mask, uint8_t *rom );
extern uint8_t ds18b20read( volatile uint8_t *port, volatile uint8_t *direction, volatile uint8_t *portin, uint8_t mask, uint8_t *rom, int16_t *temperature ) ;
extern uint8_t ds18b20rom( volatile uint8_t *port, volatile uint8_t *direction, volatile uint8_t *portin, uint8_t mask, uint8_t *rom );
extern uint8_t ds18b20wsp( volatile uint8_t *port, volatile uint8_t *direction, volatile uint8_t *portin, uint8_t mask, uint8_t *rom, uint8_t th, uint8_t tl, uint8_t conf );

#endif
