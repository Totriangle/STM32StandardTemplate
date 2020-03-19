#ifndef __LCD_H
#define __LCD_H

#include "stm32f10x.h"
#include "delay.h"


#define   BLACK                0x0000                // ��ɫ��    0,   0,   0 //
#define   BLUE                 0x001F                // ��ɫ��    0,   0, 255 //
#define   GREEN                0x07E0                // ��ɫ��    0, 255,   0 //
#define   CYAN                 0x07FF                // ��ɫ��    0, 255, 255 //
#define   RED                  0xF800                // ��ɫ��  255,   0,   0 //
#define   MAGENTA              0xF81F                // Ʒ�죺  255,   0, 255 //
#define   YELLOW               0xFFE0                // ��ɫ��  255, 255, 0   //
#define   WHITE                0xFFFF                // ��ɫ��  255, 255, 255 //
#define   NAVY                 0x000F                // ����ɫ��  0,   0, 128 //
#define   DGREEN               0x03E0                // ����ɫ��  0, 128,   0 //
#define   DCYAN                0x03EF                // ����ɫ��  0, 128, 128 //
#define   MAROON               0x7800                // ���ɫ��128,   0,   0 //
#define   PURPLE               0x780F                // ��ɫ��  128,   0, 128 //
#define   OLIVE                0x7BE0                // ����̣�128, 128,   0 //
#define   LGRAY                0xC618                // �Ұ�ɫ��192, 192, 192 //
#define   DGRAY                0x7BEF                // ���ɫ��128, 128, 128 //

void LCD_Init(void);
void DrawPixel(u16 x, u16 y, int Color);
void DrawHLine(u16 x, u16 y, u16 lenth, u16 color);
void DrawRLine(u16 x, u16 y, u16 lenth, u16 color);

void LCD_Clear(u16 Color);
void LCD_Fill(u16 xStart,u16 yStart,u16 xLong,u16 yLong,u16 Color);
void LCD_DrawCircle(u16 cx,u16 cy,u16 r,u16 color,u8 fill);
void LCD_DrawRectangle(u16 x1, u16 y1, u16 x2, u16 y2, u16 Color, u8 Fill);
void LCD_ShowChar(u16 x,u16 y,u8 num,u8 size,u16 charColor,u16 bkColor);
void LCD_ShowString(u16 x,u16 y,u16 width,u16 height,u8 size,u8 *p,u16 charColor,u16 bkColor);
void LCD_ShowNum(u16 x,u16 y,u32 num,u8 len,u8 size,u16 charColor,u16 bkColor);

#endif /* __LCD_H__ */
/* The End of NewLine is very important! */
