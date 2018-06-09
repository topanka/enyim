#ifndef __UCCBAR_H_INCLUDED__
#define __UCCBAR_H_INCLUDED__

#include "Arduino.h"

#define MCP3008_CH0             0x08     // ADC Channel 0
#define MCP3008_CH1             0x09     // ADC Channel 1
#define MCP3008_CH2             0x0A     // ADC Channel 2
#define MCP3008_CH3             0x0B     // ADC Channel 3
#define MCP3008_CH4             0x0C     // ADC Channel 4
#define MCP3008_CH5             0x0D     // ADC Channel 5
#define MCP3008_CH6             0x0E     // ADC Channel 6
#define MCP3008_CH7             0x0F     // ADC Channel 7

#define SMAR_ADCLOC_ARDUINO     1
#define SMAR_ADCLOC_MCP3008     2

#define SMAR_TOT_NUM           31

typedef struct tagSMAR {
  int tbl[SMAR_TOT_NUM];
  uint8_t idx;
  int sum;
  uint8_t port;
  int lvv;
  unsigned int lvc;
  uint8_t avn;
  unsigned int eqn;
  unsigned long lvt;
  uint8_t loc;
  uint8_t vcmin;
} SMAR;

#endif /* __UCCBAR_H_INCLUDED__ */
