;@autor  DIEGO ADOLFO DELGADO OJEDA 
;@fecha   09/01/2023
;@file    retardos.inc
;@Version  MPLAB X IDE v6.00
;@Descripcion   Este es una libreria de retardos
;Frecuencia a trabajar = 4MHz
;TCY = 1us
 ;----------------------------;
PSECT udata_acs
contador1:  DS 1	    ;reserva 1 byte en access ram
contador2:  DS 1	    ;reserva 1 byte en access ram
    
PSECT code  

Delay_10us:		    		   
    MOVLW   	1	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop1:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN
 
Delay_25us:		    		   
    MOVLW   	5	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy

Delay_50us:		    	   
    MOVLW   	11	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
 
Delay_100us:		    		   
    MOVLW   	24	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_250us:		    		   
    MOVLW   	61	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
   
Delay_500us:		    		   
    MOVLW   	124	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_1ms:		    		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Delay_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Delay_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
 
Delay_5ms:		   
    MOVLW   5		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy
  
 Delay_10ms:		    
    MOVLW   10		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 

Delay_25ms:		    
    MOVLW   25	    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_50ms:		    
    MOVLW   50		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 

Delay_100ms:		    
    MOVLW   100		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_200ms:		    
    MOVLW   200		    ; 1Tct
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy    
Int_Loop:
    Nop			    ; k*Tcy  
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy 
    GOTO    Int_Loop	    ; (k-1)+2Tcy 
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy 
    GOTO    Ext_Loop	    ; (k-1)+2Tcy 
    RETURN		    ; 2Tcy 
    
Delay_250ms:	
    MOVLW   250		    ; 1Tcy
    MOVWF   contador2,0	    ; 1Tcy
;   T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		   
    MOVLW   	249	    ; 1Tcy
    MOVWF   contador1,0	    ; 1Tcy
Int_Loop:
    Nop			    ; k*Tcy
    DECFSZ  contador1,1,0   ; (k-1)+ 3Tcy
    GOTO    Int_Loop	    ; (k-1)+2Tcy
    DECFSZ  contador2,1,0   ; (k-1)+ 3Tcy
    GOTO    Ext_Loop	    ; (k-1)+2Tcy
 RETURN			    ; 2Tcy


