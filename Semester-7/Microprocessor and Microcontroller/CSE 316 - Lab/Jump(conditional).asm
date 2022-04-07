.MODEL SMALL
.STACK 100H

.CODE
MAIN PROC
    
    MOV AX,1
    JMP L
    MOV BX,5
    L:
        MOV AX,3   
        
        
      CMP AX,BX  ;IF AX > BX, JMP TO LBL P ;SUB AX-BX 
      JA P
      JMP EXIT
      
      P:
      MOV AX,7
      
       
      
      EXIT:   
      MAIN ENDP
END MAIN
        
      
      
      
      
      
      ; FOR SIGNED JUMP:
        
     ; JG  <JUMP IF GREATER                FOR UNSIGNED JUMP:  JA<JUMP IF ABOVE  JAE<JUMP IF BELOW  JB< JUMP IF BELOW  JBE<JUMP IF BELOW OR EQUAL 
     ; JGE  <JUMP IF GREATER OR EQUAL
     ; JL   <JUMP IF LESS
     ; JLE  <JUMP IF LESS OR EQUEL  