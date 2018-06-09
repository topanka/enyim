#ifndef __UCCBBTN_H_INCLUDED__
#define __UCCBBTN_H_INCLUDED__

typedef struct tagUCCBBTN {
  uint8_t port;
  int nlg;
  int bsl_s;
  int clkn;
  int hop;
  unsigned long bsl_t;
  int last_not_low;
} UCCBBTN;

typedef int (*eepromsave_ft)(int);

int uccbbtn_init(UCCBBTN *btn, uint8_t port, int nlg);
int uccb_btn_check(UCCBBTN *btn, int *ev);

#endif /* __UCCBBTN_H_INCLUDED__ */
