; ###############################################################################
;                            Software License Agreement
;
;  The software supplied herewith by Microchip Technology Incorporated 
;  (the "Company") is intended and supplied to you, the Company's customer,
;  for use solely and exclusively on Microchip products.
;
;  The software is owned by the Company and/or its supplier, and is 
;  protected under applicable copyright laws. All rights are reserved.
;  Any use in violation of the foregoing restrictions may subject the user
;  to criminal sanctions under applicable laws, as well as to civil 
;  liability for the breach of the terms and conditions of this license.
;
;  THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION. NO WARRANTIES,
;  WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO,
;  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
;  PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT, IN ANY
;  CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR CONSEQUENTIAL
;  DAMAGES, FOR ANY REASON WHATSOEVER.
;
; ###############################################################################
;***************************************************************
;*
;*	File: UARTMonitor.h
;*
;*	header file for the generic Monitor application program
;*
;*	Modified: 
;*	Ver 1.00	24 March 2005
;*	  Original code
;*
;***************************************************************

	errorlevel -302

	include	"UARTInterface.h"

#ifdef	UARTMonitor_M
; Global routines	
	GLOBAL	TxmtService
	GLOBAL	RcvService
	GLOBAL	CmdService
	GLOBAL	MonitorInit
#else
; External routines	
	EXTERN	TxmtService
	EXTERN	RcvService
	EXTERN	CmdService
	EXTERN	MonitorInit
#endif


