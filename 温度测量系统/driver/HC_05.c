#include <reg52.h>

/*���ڳ����ʼ��*/
void Com_Init(void)
{
	TMOD = 0x20;
	PCON = 0x00;
	SCON = 0x50;
	TH1 = 0xfd;
	TL1 = 0xfd;
	TR1 = 1;
	ES = 1;
	EA = 1;
}