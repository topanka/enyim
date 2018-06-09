#ifndef __RA1ST_H_INCLUDED__
#define __RA1ST_H_INCLUDED__

#define UCCB_CBOX_LEAD          0x96
#define UCCB_RA1_LEAD          0x38

#define UCCB_PST_INIT           1
#define UCCB_PST_TYPE           2
#define UCCB_PST_DATA           3
#define UCCB_PST_CRC            4
#define UCCB_PST_READY          66

#define UCCB_PKTTYPE_C1         0x47

#define UCCB_CBOX_C1_PKTLEN     40
#define UCCB_CBOX_C1_PKTLAST    (UCCB_CBOX_C1_PKTLEN-2)

#define UCCB_RA1_C1_PKTLEN     27
#define UCCB_RA1_C1_PKTLAST    (UCCB_RA1_C1_PKTLEN-2)

#define UCCB_ST_SW10P		0x000F    /* 0000 0000 0000 XXXX */

#define UCCB_PL_OFF		0
#define UCCB_PL_ON		1
#define UCCB_PL_BLINK		2
#define UCCB_PL_STPOS		12

#define RA1_DRIVE_AUTO1     1
#define RA1_DRIVE_REMOTE    2

#define RA1_RUNST_STOPPED   1
#define RA1_RUNST_RUNNING   2

#endif /* __RA1ST_H_INCLUDED__ */
