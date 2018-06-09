//pe2,pe6,pe7,ph2,ph7,pg3,pg4,pd4,pd5,pd6,pj2,pj3,pj4,pj5,pj6,pj7.

#include "umpmega.h"

#define PA 1
#define PB 2
#define PC 3
#define PD 4
#define PE 5
#define PF 6
#define PG 7
#define PH 8
#define PJ 10
#define PK 11
#define PL 12

#define ump_digitalPinToPort(P) ( pgm_read_byte( ump_digital_pin_to_port_PGM + (P) ) )
#define ump_digitalPinToBitMask(P) ( pgm_read_byte( ump_digital_pin_to_bit_mask_PGM + (P) ) )


const uint8_t PROGMEM ump_digital_pin_to_port_PGM[] = {
  // PORTLIST    
  // -------------------------------------------    
  PE  , // PE 2 ** 0
  PE  , // PE 6 ** 1
  PE  , // PE 7 ** 2
  PH  , // PH 2 ** 3
  PH  , // PH 7 ** 4
  PG  , // PG 3 ** 5
  PG  , // PG 4 ** 6
  PD  , // PD 4 ** 7
  PD  , // PD 5 ** 8
  PD  , // PD 6 ** 9
  PJ  , // PJ 2 ** 10
  PJ  , // PJ 3 ** 11
  PJ  , // PJ 4 ** 12
  PJ  , // PJ 5 ** 13
  PJ  , // PJ 6 ** 14
  PJ  , // PJ 7 ** 15
};

const uint8_t PROGMEM ump_digital_pin_to_bit_mask_PGM[] = {
  // PIN IN PORT    
  // -------------------------------------------    
  _BV( 2 )  , // PE 2 ** 0
  _BV( 6 )  , // PE 6 ** 1
  _BV( 7 )  , // PE 7 ** 2
  _BV( 2 )  , // PH 2 ** 3  
  _BV( 7 )  , // PH 7 ** 4    
  _BV( 3 )  , // PG 3 ** 5
  _BV( 4 )  , // PG 4 ** 6    
  _BV( 4 )  , // PD 4 ** 7
  _BV( 5 )  , // PD 5 ** 8
  _BV( 6 )  , // PD 6 ** 9
  _BV( 2 )  , // PJ 2 ** 10
  _BV( 3 )  , // PJ 3 ** 11
  _BV( 4 )  , // PJ 4 ** 12
  _BV( 5 )  , // PJ 5 ** 13
  _BV( 6 )  , // PJ 6 ** 14
  _BV( 7 )  , // PJ 7 ** 15  
};

void ump_pinMode(uint8_t pin, uint8_t mode)
{
  uint8_t bit = ump_digitalPinToBitMask(pin);
  uint8_t port = ump_digitalPinToPort(pin);
  volatile uint8_t *reg, *out;

  if (port == NOT_A_PIN) return;

  // JWS: can I let the optimizer do this?
  reg = portModeRegister(port);
  out = portOutputRegister(port);

  if (mode == INPUT) { 
    uint8_t oldSREG = SREG;
                cli();
    *reg &= ~bit;
    *out &= ~bit;
    SREG = oldSREG;
  } else if (mode == INPUT_PULLUP) {
    uint8_t oldSREG = SREG;
                cli();
    *reg &= ~bit;
    *out |= bit;
    SREG = oldSREG;
  } else {
    uint8_t oldSREG = SREG;
                cli();
    *reg |= bit;
    SREG = oldSREG;
  }
}

void ump_digitalWrite(uint8_t pin, uint8_t val)
{
  uint8_t bit = ump_digitalPinToBitMask(pin);
  uint8_t port = ump_digitalPinToPort(pin);
  volatile uint8_t *out;

  if (port == NOT_A_PIN) return;

  out = portOutputRegister(port);

  uint8_t oldSREG = SREG;
  cli();

  if (val == LOW) {
    *out &= ~bit;
  } else {
    *out |= bit;
  }

  SREG = oldSREG;
}

