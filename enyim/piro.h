#ifndef __PIRO_H_INCLUDED__
#define __PIRO_H_INCLUDED__

#include "Arduino.h"

#define PIRO_SCAN_START         1
#define PIRO_SCAN_ONPROGRESS    2
#define PIRO_SCAN_STOP          3
#define PIRO_SCAN_FOLLOW        4
#define PIRO_SCAN_COURSE        5
#define PIRO_MOTOR_FOLLOW       6

typedef struct tagPIRO {
  int port;
  unsigned long s_t0;
  unsigned long s_t1;
  unsigned long s_s;
  unsigned long s_n;
  int s_val0;
  unsigned long l_t0;
  unsigned long l_t1;
  unsigned long l_s;
  unsigned long l_n;
  int l_val0;
} PIRO;

int piro_read(PIRO *ps);

#endif /* __PIRO_H_INCLUDED__ */
