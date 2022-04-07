.model small
.stack 100h           ; Convention.


.code
main proc 
   
  MOV AH,1   ; Input will go to AL     AL(SAVE)
  INT 21H
  
  MOV AH,2  ;OUTPUT
  
  MOV DL,AL
  INT 21H
   
   
    main endp  
              
           
END MAIN 

                  ; Single character input and Output
