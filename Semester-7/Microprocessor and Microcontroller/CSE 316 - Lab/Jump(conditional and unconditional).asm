.MODEL SMALL
.STACK 100H

.CODE
MAIN PROC
    
    MOV AX,1
    JMP LABEL              ; THERE ARE TWO TYPES OF JUMMPING: UNCONDITIONAL,CONDITIONAL  
    MOV BX,5        
    LABEL:
        MOV AX,3
        
        
        
    MAIN ENDP
END MAIN
    
    
    