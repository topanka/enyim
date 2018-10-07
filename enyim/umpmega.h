#ifndef __UMPMEGA_H_INCLUDED__
#define __UMPMEGA_H_INCLUDED__

#include "Arduino.h"

#define UMP_NUM_DIGITAL_PINS   16

void ump_pinMode(uint8_t pin, uint8_t mode);
void ump_digitalWrite(uint8_t pin, uint8_t val);

#endif /* __UMPMEGA_H_INCLUDED__ */
