#ifndef __WD6CUMC_H_INCLUDED__
#define __WD6CUMC_H_INCLUDED__

#define WD6CUMC_CU_LEAD      0x17
#define WD6CUMC_MC_LEAD      0x56

#define WD6CUMC_PST_INIT          1
#define WD6CUMC_PST_DATA          2
#define WD6CUMC_PST_CRC           3
#define WD6CUMC_PST_READY        66

#define WD6CUMC_CU_PKTLEN      34
#define WD6CUMC_CU_PKTLAST     (WD6CUMC_CU_PKTLEN-2)

#define WD6CUMC_MC_PKTLEN      30
#define WD6CUMC_MC_PKTLAST     (WD6CUMC_MC_PKTLEN-2)

#endif /* __WD6CUMC_H_INCLUDED__ */
