#ifndef __SH1TMR_H_INCLUDED__
#define __SH1TMR_H_INCLUDED__

#include "Arduino.h"

typedef struct tagMYTMR {
  unsigned char init;
  unsigned long lct;
  unsigned long cnt;
  unsigned long tmo;
} MYTMR;

int tmr_init(MYTMR *tmr, unsigned long tmo);
int tmr_do(MYTMR *tmr);
int tmr_reset(MYTMR *tmr);
int tmr_destroy(MYTMR *tmr);

#endif /* __SH1TMR_H_INCLUDED__ */
