#ifndef __UCCBTSCR_H_INCLUDED__
#define __UCCBTSCR_H_INCLUDED__

#define TSCR_CBOX_LEAD      0x31
#define TSCR_TSCR_LEAD      0x44

#define TSCR_PST_INIT          1
#define TSCR_PST_DATA          2
#define TSCR_PST_CRC           3
#define TSCR_PST_READY        66

#define TSCR_CBOX_PKTLEN      43
#define TSCR_CBOX_PKTLAST     (TSCR_CBOX_PKTLEN-2)

#define TSCR_TSCR_PKTLEN      16
#define TSCR_TSCR_PKTLAST     (TSCR_TSCR_PKTLEN-2)

#endif /* __UCCBTSCR_H_INCLUDED__ */
