#include<lpc214x.h>
unsigned int delay;
unsigned char *ptr, arr[]="HELLO WORLD\r";
int main()
{
		PINSEL0=0X0000005;
		U0LCR=0X00000083;
		U0DLM=0X00;
		U0DLL=0X3;
		U0LCR=0X00000003;
		while(1)
		{
			ptr=arr;
			while(*ptr !='\0')
			{
				U0THR=*ptr++;
					while(!(U0LSR & 0x20)==0x20)
						for(delay=0;delay<=600;delay++);
			}
			for(delay=0;delay<=60000;delay++);
		}
}
	