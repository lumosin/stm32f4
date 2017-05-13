#ifndef __PICLIB_H
#define __PICLIB_H	  		  
#include "init.h" 
#include "ili9325.h"
#include "malloc.h"
#include "exfuns.h"
#include "bmp.h"
#include "tjpgd.h"
/////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK MiniSTM32开发板
//图片解码 驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2014/3/14
//版本：V2.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved
//********************************************************************************
//升级说明
//V2.0
//1,将jpeg解码库换成了TJPGD,支持更多的jpg/jpeg文件,支持小尺寸图片快速jpeg显示 
//2,pic_phy里面新增fillcolor函数,用于填充显示,以提高小尺寸jpg图片的显示速度
//3,ai_load_picfile函数,新增一个参数:fast,用于设置是否使能jpeg/jpg快速显示
//注意:这里的小尺寸是指:jpg/jpeg图片尺寸小于等于LCD尺寸.
//////////////////////////////////////////////////////////////////////////////////

#define PIC_FORMAT_ERR		0x27	//格式错误
#define PIC_SIZE_ERR		0x28	//图片尺寸错误
#define PIC_WINDOW_ERR		0x29	//窗口设定错误
#define PIC_MEM_ERR			0x11	//内存错误
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef TRUE
#define TRUE    1
#endif
#ifndef FALSE
#define FALSE   0
#endif 

//图片显示物理层接口  
//在移植的时候,必须由用户自己实现这几个函数


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//图像信息

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void piclib_init(void);								//初始化画图
u8 ai_load_picfile(FIL *file,u16 x,u16 y,u16 width,u16 height,u8 type);//智能画图
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif






























