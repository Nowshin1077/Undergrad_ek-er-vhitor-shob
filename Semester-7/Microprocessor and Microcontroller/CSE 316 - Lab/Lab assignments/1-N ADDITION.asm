;; Question: Write an assembly code to print the sum of all numbers from 1 to N (using loops). Where N is a user input number. To find the sum, use a different procedure other than main.
;; For example: If input N is 7, then sum of 1 to 7 is 28. print the value 28. (2 digit value printing is not necessary, but show the sum in variable window, where it is saved.


.MODEL SMALL

.STACK 100H

.DATA


MSG DB 'ENTER THE VALUE OF N:$'
ANS DB 'TOTAL SUMMATION IS:$;'

.CODE

    MAIN PROC 
    
    MOV AX,@DATA
    MOV DS,AX
    
    
    ;INVOKE USER TO ENTER A NUMBER
    
    
    MOV AH,9
    LEA DX,MSG
    INT 21H 
    
    
    ;GET INPUT FROM THE USER
    
    MOV AH,1
    INT 21H
    MOV BL,AL
    SUB BL,48    ;SUBTRUCTING ASCII VALUE TO GET EXACT NUMERICAL VALUE
    
    MOV CX,BX
    
    MOV BX,0
    MOV AH,2 
    
    LEVEL1:
    ADD BX,CX   ;ADDING COUNTER REGISTER VALUE UNTILL IT BECOMES 0
    
    LOOP LEVEL1
    
    ;PRINTING NEW LINE
    
    MOV AH,2
    MOV DX,10
    INT 21H
    MOV DX,13
    INT 21H
    
    ;PRINTING TOTAL SUMMATION
    
    MOV AH,9
    LEA DX,ANS
    INT 21H
    
    
    MOV AH,2
    ADD BL,48   ;CONVERTING TO NUMERICAL VALUE
    MOV DL,BL
    INT 21H
    
    MAIN ENDP
END MAIN
    


