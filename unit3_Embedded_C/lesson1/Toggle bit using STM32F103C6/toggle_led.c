/**
 ******************************************************************************
 * @file           : main.c
 * @author         : ahmed nabil
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

typedef volatile unsigned int vusint32;

#define RCC_base		 0x40021000
#define GPIO_PA 		 0x40010800
#define RCC_APB2ENR 	 	 *(vusint32 *) (RCC_base+0x18)
#define GPA_CRH 		 *(vusint32 *) (GPIO_PA+0x04)
#define GPA_ODR  		 *(vusint32 *) (GPIO_PA+0x0c)

typedef union
{
	vusint32 allfields;
	struct
	{
		vusint32 reserved:13;
		vusint32 pin13:1;
	}Pins;
}R_ODR_t;

volatile R_ODR_t *P_ODR=(volatile R_ODR_t *) (GPIO_PA+0x0C);



int main(void)
{
	int i;
	//SET APR BIT 2 
	RCC_APB2ENR |=(1<<2);
	// SET CRH BITS FROM 20:24 =2
	GPA_CRH &= 0xff0fffff;
	GPA_CRH |= 0x00200000;
	for(; ;)
	{
		P_ODR->Pins.pin13=1;
		for(i=0;i<100000;i++); //Delay
		P_ODR->Pins.pin13=0;
		for(i=0;i<100000;i++);
	}

}
