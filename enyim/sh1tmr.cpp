#include "sh1tmr.h"

extern unsigned long g_millis;

int tmr_init(MYTMR *tmr, unsigned long tmo)
{
  tmr->init=1;
  tmr->lct=0;
  tmr->cnt=0;
  tmr->tmo=tmo;
  return(0);
}

int tmr_do(MYTMR *tmr)
{
  if(tmr->init != 1) return(-1);
  if(tmr->lct <= g_millis) {
    tmr->lct=g_millis+tmr->tmo;
    tmr->cnt++;
    return(1);
  }
  return(0);
}

int tmr_reset(MYTMR *tmr)
{
  if(tmr->init != 1) return(-1);
  tmr->lct=g_millis+tmr->tmo;
  return(0);
}

int tmr_destroy(MYTMR *tmr)
{
//  tmr_init(tmr,0);
  tmr->init=0;
  return(0);
}
