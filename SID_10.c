/*
 * SID_10.c
 *
 *  Created on: 18-Feb-2020
 *      Author: Admin
 */

//#include "Subid_10.h"
#include "NRC.h"
#include "DSD.h"
#include "SID_Common_Types.h"

//static Subid_var;

	int i;
    u8 negative_resp_id;
    u8 positive_resp;
   

void Diagnostic_Session_Control(message_context_type)
{
	if(message_context_type.DLC == 0x02)
	{
		switch(message_context_type.Subid)
		{
			case 0x01:	Active_Session = Default;
						Set Positive Response();
						break;
			case 0x02:	Active_Session = programming;
						Set Positive Response();
						break;
			case 0x03:	Active_Session = Extended;
						Set Positive Response();
						break;
			default : printf("NRC_0x12");
		}
	}
	else
	{
		Printf("NRC_0x13");
	}
}
