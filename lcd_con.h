/***********************************************************************
Private variables and functions
関数プロトタイプ宣言
***********************************************************************/
#include <stdint.h>
//
//int dispset_titl(void);
void lcd_init(void);
void lcd_l1(unsigned char col1);
void lcd_l2(unsigned char col2);
void lcd_cout(unsigned char ccod);
int lcd_dout(unsigned char dcod);
void delay_micro(unsigned int icnt);
void delay_msec(unsigned int icnt);

void dispset_count(void);

extern unsigned char dpcnt[4];

void increment(void);