#include<lpc214x.h>
unsigned long int var=0;
unsigned int i=0,j=0,k=0;
int main(void)
{
    PINSEL0=0X00000000;
    IO0DIR=0X0000F0000;
    while(1)
    {
        for(j=0;j<50;j++)
        {
            var=0x0001000;//clockwise
            for(i=0;i<=3;i++)
            {
                IO0PIN=var;
                for(k=0;k<50000;k++);
                var=var<<1;
            }//clockwise ends
        }for(k=0;k<60000;k++);//delay

        for(j=0;j<50;j++)
        {
            var=0x00008000;//anticlockwise
            for(i=0;i<=3;i++)
            {
                IO0PIN=var;
                for(k=0;k<50000;k++);
                var=var>>1;
            }//anticlockwise ends
        }for(k=0;k<60000;k++);//delay


    }
}
