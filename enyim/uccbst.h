#ifndef __UCCBST_H_INCLUDED__
#define __UCCBST_H_INCLUDED__

#define UCCB_MD_MAXSPEED	400
#define UCCB_RDD_MAXPOS		200

#define UCCB_ST_M1		0x8000    /* 1000 0000 0000 0000 */
#define UCCB_ST_M2		0x4000    /* 0100 0000 0000 0000 */
#define UCCB_ST_POSLIGHT	0x3000    /* 0011 0000 0000 0000 */
#define UCCB_ST_SW10P		0x000F    /* 0000 0000 0000 XXXX */

#define UCCB_PL_OFF		0
#define UCCB_PL_ON		1
#define UCCB_PL_BLINK		2
#define UCCB_PL_STPOS		12

#define UCCB_KEY_UP		'2'
#define UCCB_KEY_DOWN		'8'
#define UCCB_KEY_ENTER		'#'
#define UCCB_KEY_CANCEL		'*'

#define UCCB_CBOX_LEAD          0x88
#define UCCB_SHIP_LEAD          0x26

#define UCCB_PST_INIT           1
#define UCCB_PST_DATA           2
#define UCCB_PST_CRC            3
#define UCCB_PST_READY          66
 
#define UCCB_CBOX_PKTLEN        39
#define UCCB_CBOX_PKTLAST       (UCCB_CBOX_PKTLEN-2)

#define UCCB_SHIP_PKTLEN        20
#define UCCB_SHIP_PKTLAST       (UCCB_SHIP_PKTLEN-2)

#endif /* __UCCBST_H_INCLUDED__ */
