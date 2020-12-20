#ifndef __I2CGEN_H_INCLUDED__
#define __I2CGEN_H_INCLUDED__

#define I2CGEN_BUFSIZE		24

typedef struct tagI2CGEN {
  char state;
  char buf[I2CGEN_BUFSIZE];
  unsigned char len;
} I2CGEN;



#endif /* __I2CGEN_H_INCLUDED__ */

