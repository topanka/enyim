#include "piro.h"

extern unsigned long g_millis;

int piro_read(PIRO *ps)
{
  int v;

  if(ps->s_t0 == 0) {
    ps->s_t0=g_millis;
    ps->s_t1=ps->s_t0+2;
    ps->s_s=0;
    ps->s_n=0;
  }
  if(ps->l_t0 == 0) {
    ps->l_t0=g_millis;
//    ps->l_t1=ps->l_t0+100;
    ps->l_t1=ps->l_t0+20;
    ps->l_s=0;
    ps->l_n=0;
  }
  if((g_millis-ps->s_t1) >= 2) {
    v=analogRead(ps->port);
    ps->s_s+=v;
    ps->s_n++;
    if((g_millis-ps->s_t0) >= 20) {
      ps->s_val0=ps->s_s/ps->s_n;
      ps->s_t0=0;
    
//      if((g_millis-ps->l_t1) >= 100) {
      if((g_millis-ps->l_t1) >= 20) {
        ps->l_s+=ps->s_val0;
        ps->l_n++;
//        if((g_millis-ps->l_t0) >= 1300) {
        if((g_millis-ps->l_t0) >= 500) {
          ps->l_val0=ps->l_s/ps->l_n;
          ps->l_t0=0;
        }
        ps->l_t1=g_millis;
      }
      
      return(1);
    }
    ps->s_t1=g_millis;
  }
  return(0);
}
