#ifndef _LCD1602_
#define _LCD1602_

#define LCD1602_DB  P0

sbit LCD1602_RS = P1^0;
sbit LCD1602_RW = P1^1;
sbit LCD1602_E  = P1^2;

/* �ȴ�Һ��׼���� */
void LcdWaitReady();

/* ��LCD1602Һ��д��һ�ֽ����cmd-��д������ֵ */
void LcdWriteCmd(unsigned char cmd);

/* ��LCD1602Һ��д��һ�ֽ����ݣ�dat-��д������ֵ */
void LcdWriteDat(unsigned char dat);

/* ������ʾRAM��ʼ��ַ���༴���λ�ã�(x,y)-��Ӧ��Ļ�ϵ��ַ����� */
void LcdSetCursor(unsigned char x, unsigned char y);

/* ��Һ������ʾ�ַ�����(x,y)-��Ӧ��Ļ�ϵ���ʼ���꣬str-�ַ���ָ�� */
void LcdShowStr(unsigned char x, unsigned char y, unsigned char *str);

/* ��ʼ��1602Һ�� */
void InitLcd1602();

#endif
