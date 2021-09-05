
#include "p16f877a.inc"; Including the pic library


    STATUS equ 03h  ; Initialise the status register
 
    RP0 equ 05 ; 5th bit in the status register
    RP1 equ 06 ; 6th bit in the status register
 

    PORTB equ 06h ; Initialise the port B 
    PORTC equ 07h ; Initialise the port C 


    TRISB equ 86h ; Initialise trisb
    TRISC equ 87h ; Initialise trisc


    COUNT equ 20h ; Initialise the counter

 
    org 00h  
    clrw  ; Clear the working register
    
    
    BCF STATUS,RP0
    BCF STATUS,RP1
    
    BSF STATUS,RP0
    
    CLRF PORTB
    CLRF PORTC
    
     
    CLRF TRISB
    CLRF TRISC
    
    
    MOVLW 0X00 ; Move literal in w.register
    MOVWF TRISB
    MOVLW 0X00
    MOVWF TRISC
    
    
    
    
    
    BCF STATUS,RP0 ; Switch to the bank 0
    
    
    START MOVLW b'10001010' ; 
     MOVWF PORTB 
     
     MOVLW b'00001000'
     MOVWF PORTC
     
     MOVLW 0xff
     MOVWF COUNT
     
     
     
     OP1 DECFSZ COUNT,1 
      GOTO OP1
      
      MOVLW b'01001001' 
      MOVWF PORTB
      
      MOVLW b'0000100'
      MOVWF PORTC
      
      
      MOVLW 0xff
      MOVWF COUNT
      
      
     OP2 DECFSZ COUNT,1 ;
      GOTO OP2
      
      MOVLW b'10001001' 
      MOVWF PORTB 
      
      MOVLW b'01001000'
      MOVWF PORTC
      
      
      MOVLW 0xff
      MOVWF COUNT
     
     OP3 DECFSZ COUNT,1 ;
      GOTO OP3 
      
      MOVLW b'00100100' 
      MOVWF PORTB 
     
      MOVLW b'00010011'
      MOVWF PORTC
      
      MOVLW 0xff
      MOVWF COUNT
      
      GOTO START
    
end



