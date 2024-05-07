/*
 * Platform_types.h
 *
 *  Created on: May 6, 2024
 *      Author: Ahmed Nabil
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include<stdbool.h>

typedef _Bool boolean;  //ex: ( _bool a; a=true; )  == ( boolean a; a=true; )
#define TRUE ((_Bool)1);
#define FALSE ((_Bool)0);


typedef unsigned char uint8_t ;
typedef unsigned short uint16_t ;
typedef unsigned int uint32_t ;
typedef unsigned long long uint64_t ;

typedef  char sint8_t ;
typedef  short sint16_t ;
typedef  int sint32_t ;
typedef  long long sint64_t ;

typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;

typedef volatile unsigned char vuint8_t ;
typedef volatile unsigned short vuint16_t ;
typedef volatile unsigned int vuint32_t ;
typedef volatile unsigned long long vuint64_t ;

typedef  volatile char vsint8_t ;
typedef  volatile short vsint16_t ;
typedef  volatile int vsint32_t ;
typedef  volatile long long vsint64_t ;

typedef volatile float vfloat32_t;
typedef volatile double vfloat64_t;
typedef volatile long double vfloat128_t;

typedef void* voidptr_t;
typedef void* const constvoidptr_t;

#endif /* PLATFORM_TYPES_H_ */
