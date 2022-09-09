		area add, code, readonly
entry
start 
		mov r1,#10
		mov r2,#0
loop	
		add r2,r2,r1
		subs r1,#0x1
		bne loop
stop b stop
end