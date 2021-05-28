#ifndef _DS18B20_
#define _ds18B20_
sbit IO_18B20 = P3^7;  //DS18B20通信引脚

/* 软件延时函数，延时时间(t*10)us */
void DelayX10us(unsigned char t);

bit Get18B20Ack();

void  Write18B20(unsigned char dat);

unsigned char Read18B20();

bit Start18B20();


bit Get18B20Temp(int *temp);

#endif