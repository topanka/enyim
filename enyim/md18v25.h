#ifndef _MD18V25_H_INCLUDED__
#define _MD18V25_H_INCLUDED__

#include <arduino.h>
#include <RunningAverage.h>

struct MD18V25 {
  volatile uint16_t *_OCR;
  unsigned char dir_pin;
  unsigned char pwm_pin;
  unsigned char acs709_viout_pin;
  unsigned char acs709_vzcr_pin;
  unsigned int acs709_vzcr;
  unsigned char ff1_pin;
  unsigned char ff2_pin;
  unsigned char reset_pin;
  char dir;
  RunningAverage *mcra;
};

#endif /* _MD18V25_H_INCLUDED__ */