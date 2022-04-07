.MODEL SMALL
.STACK 100H

.DATA
VAR DB 3        ;DATA types   DB(bite> /DW<word,16bit> /DD<double word, 32bit>
STRING DB 'ENTER INPUT:$'

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    MOV AH,9
    LEA Dx,STRING     ;LEA <LOAD EFFECTIVE ADDRESS  
    INT 21H     
    
    
    MOV AH,1
    INT 21H  
    MOV AH,2 
    MOV DL,AL
    INT 21H
    
    
    MAIN ENDP
END MAIN





