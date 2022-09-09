#include<lpc214x.h>
unsigned int j=0;
int main()
{
	IO0DIR=0X00000900;
	IO0SET=0X00000100;
	while(1)
		{
			IO0CLR=0X00000900;
			for(j=0;j<10000;j++)
			IO0SET=0x00000900;
			for(j=0;j<400000;j++);
			IO0CLR=0X00000900;
			for(j=0;j<10000;j++)
			IO0SET=0x00000100;
			for(j=0;j<400000;j++);
	  }
}