#include <uccbcrc.h>

const unsigned char CRC7_POLY = 0x91;
unsigned char CRCTable[256];

unsigned char getCRCForByte(unsigned char val)
{
  unsigned char j;
 
  for(j=0;j < 8;j++) {
    if(val&1) {
      val^=CRC7_POLY;
    }
    val>>=1;
  }
 
  return val;
}
 
void buildCRCTable(void)
{
  int i;
 
  // fill an array with CRC values of all 256 possible bytes
  for (i=0;i < 256;i++) {
    CRCTable[i]=getCRCForByte(i);
  }
}
 
unsigned char getCRC(unsigned char message[], unsigned int length)
{
  unsigned int i;
  unsigned char crc = 0;
 
  for(i=0;i < length;i++)
    crc=CRCTable[crc^message[i]];
  return(crc);
}
