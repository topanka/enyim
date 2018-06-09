#ifndef __WD6RE_H_INCLUDED__
#define __WD6RE_H_INCLUDED__

#define WD6RE_TBI_NUM       3

typedef struct tagWD6RE {
  volatile uint8_t ic;     // interrupt counter
  uint8_t ico;
  volatile unsigned long g_wd6re_tbi;  //time between interrupts
  uint8_t g_wd6re_num_tbi;
  uint8_t l_idx;
  uint8_t l_r0;
  uint16_t l_rpm;
  unsigned long l_tbi[WD6RE_TBI_NUM];
  unsigned long l_sum;
  unsigned long l_t0;
  uint16_t rpm;
  uint16_t rpmo;
} WD6RE;

void wd6re_isrJ1(void);
void wd6re_isrJ2(void);
void wd6re_isrJ3(void);
void wd6re_isrB2(void);
void wd6re_isrB2(void);
void wd6re_isrB3(void);


#endif /* __WD6RE_H_INCLUDED__ */
