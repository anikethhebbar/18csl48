		AREA MULTIPLY,CODE,READONLY
ENTRY
START
		MOV R1,#0X0002
		MOV R2,#0X0001
		MUL R3,R1,R2
STOP B STOP
END
