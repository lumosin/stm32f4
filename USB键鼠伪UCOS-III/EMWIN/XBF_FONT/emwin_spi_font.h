#ifndef EMWIN_SPI_FONT_H
#define EMWIN_SPI_FONT_H

#include "w25qxx.h"
#include "init.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F407开发板
//STemwin XBF格式字体显示   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/4/8
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

extern GUI_FONT XBF16_Font;
extern GUI_FONT XBF24_Font;



u8 Create_XBF16(u8 *fxpath); 
u8 Create_XBF24(u8 *fxpath); 
void emwin_font_load();

#endif
