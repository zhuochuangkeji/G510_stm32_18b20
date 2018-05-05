#ifndef __DS18B20_H_
#define __DS18B20_H_
#include <stdio.h>
#include <stm32f1xx_hal.h>
#include "main.h"

//IO方向设置
//#define DS18B20_IO_IN()  {GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=8<<12;}
//#define DS18B20_IO_OUT() {GPIOG->CRH&=0XFFFF0FFF;GPIOG->CRH|=3<<12;}
////IO操作函数											   
#define	DS18B20_DQ_OUT_1	 HAL_GPIO_WritePin(temperature_GPIO_Port, temperature_Pin, GPIO_PIN_SET)
#define	DS18B20_DQ_OUT_0 	 HAL_GPIO_WritePin(temperature_GPIO_Port, temperature_Pin, GPIO_PIN_RESET)
#define	DS18B20_DQ_IN  HAL_GPIO_ReadPin(temperature_GPIO_Port, temperature_Pin)  //数据端口	Pb1
   	
unsigned char DS18B20_Init(void);			//初始化DS18B20
float DS18B20_Get_Temp(void);	//获取温度
void DS18B20_Start(void);		//开始温度转换
void DS18B20_Write_Byte(unsigned char dat);//写入一个字节
unsigned char DS18B20_Read_Byte(void);		//读出一个字节
unsigned char DS18B20_Read_Bit(void);		//读出一个位
unsigned char DS18B20_Check(void);			//检测是否存在DS18B20
void DS18B20_Rst(void);			//复位DS18B20    
#endif















