#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK��ӢSTM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
#define LED1 PBout(5)// PB5
#define LED0 PEout(5)// PE5	

#define LED0_ON   GPIO_ResetBits(GPIOE,GPIO_Pin_5)
#define LED0_OFF   GPIO_SetBits(GPIOE,GPIO_Pin_5)

void LED_Init(void);//��ʼ��

		 				    
#endif