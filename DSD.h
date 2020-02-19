/*
 * DSD.h
 *
 *  Created on: 18-Feb-2020
 *      Author: Admin
 */

#ifndef DSD_H_
#define DSD_H_

#define Diagnostic_Session_Control 0x10

#define Default_Session		0x01
#define Programming_Session	0x02
#define Extended_Session	0x03

extern int Active_Session;
extern int Subid;

void Diagnostic_Session_Control(message_context_type);

typedef message_context_type
	{
		u8 	sid     = 10;
		u8	dlc     = 2;
		uint32 req  = 10;
		uint32 resp = 50;


	} message_context_type;

typedef struct_var
{
	unsigned_int req;
	unsigned_int resp;
	unsigned_int req_len;
	unsigned_int req_resp;

} struct_var;


#endif /* DSD_H_ */
