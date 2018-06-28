#define LCD_ADDRESS 0x3C


 void LED_CLS(void);
 void LED_Set_Pos(unsigned char x,unsigned char y);//Set the coordinate
 void LED_WrCmd(unsigned char data);   //Write Data
 void LED_WrDat(unsigned char data);   //Write Data
 void LED_P6x8Char(unsigned char x,unsigned char y,unsigned char ch);
 void LED_P6x8Str(unsigned char x,unsigned char y,unsigned char ch[]);
 void LED_P8x16Str(unsigned char x,unsigned char y,unsigned char ch[]);

 void LED_PrintBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char bmp[]); 
 void LED_Fill(unsigned char dat);
 void LED_PrintValueC(unsigned char x, unsigned char y,char data);
 void LED_PrintValueI(unsigned char x, unsigned char y, int data);
 void LED_PrintValueF(unsigned char x, unsigned char y, float data, unsigned char num);
 void LED_PrintEdge(void);
 void LED_Cursor(unsigned char cursor_column, unsigned char cursor_row);
 void LED_PrintLine(void);