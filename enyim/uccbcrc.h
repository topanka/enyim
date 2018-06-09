#ifndef __UCCBCRC_H_INCLUDED__
#define __UCCBCRC_H_INCLUDED__

#include "Arduino.h"

void buildCRCTable(void);
unsigned char getCRC(unsigned char message[], unsigned int length);

#endif /* __UCCBCRC_H_INCLUDED__ */
