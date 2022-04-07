
;; Question: Write an assembly code to print the sum of all numbers from 1 to N (using loops). Where N is a user input number. To find the sum, use a different procedure other than main.
;; For example: If input N is 7, then sum of 1 to 7 is 28. print the value 28. (2 digit value printing is not necessary, but show the sum in variable window, where it is saved.)

.MODEL SMALL  

.STACK 100h

.DATA

    ;ARR DB 1,2,3,4,5,6 
    A DW 1
    Addition DW ?




.CODE


    MAIN PROC
        
         MOV AX,@DATA
         MOV DS,AX    
         
         
         MOV AH,01H
         INT 21H    
         
         
         SUB AL,48
                      
         MOV CX,0
         MOV CL,AL
         
         
         ;MOV SI,OFFSET ARR
         
         
         ;MOV CX,5
         MOV BX,0
         
         SUM: 
         
            ADD BX,A
            INC A
            LOOP SUM
            
            ;ADD BH,[SI]
            ;INC SI
            ;LOOP SUM
            
            MOV Addition,BX  
             
            
    
    MAIN ENDP
    
END MAIN
RET


