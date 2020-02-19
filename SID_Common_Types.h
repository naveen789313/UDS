/*
 * SID_Common_Types.h
 *
 *  Created on: 19-Feb-2020
 *      Author: Admin
 */

#ifndef SID_COMMON_TYPES_H_
#define SID_COMMON_TYPES_H_

#define NOP		no_operation
#define stop	stop

typedef unsigned char		flag;
typedef unsigned char		u8;
typedef signed char		    s8;
typedef unsigned short		u16;
typedef signed short		s16;
typedef float				f32;
typedef double				f32;

#ifndef FALSE
#define FALSE	((flag) 0 )
#endif

#ifndef TRUE
#define TRUE	((flag) 1 )
#endif /* SID_COMMON_TYPES_H_ */
