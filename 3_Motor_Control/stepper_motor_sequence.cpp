#include "mbed.h"
DigitalOut pin1(p5);
DigitalOut pin2(p6);
DigitalOut pin3(p7);
DigitalOut pin4(p8);
DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);
DigitalOut myled4(LED4);
int main()
{
while(1)
{
for(int i=0; i<2;i++)
{
pin1=1;pin2=1;pin3=0;pin4=0;myled1=1;wait(0.2);myled1=0;
pin1=0;pin2=1;pin3=1;pin4=0;myled2=1;wait(0.2);myled2=0;
pin1=0;pin2=0;pin3=1;pin4=1;myled3=1;wait(0.2);myled3=0;
pin1=1;pin2=0;pin3=0;pin4=1;myled4=1;wait(0.2);myled4=0;
}
for(int i=0; i<2;i++)
{
pin1=1;pin2=1;pin3=0;pin4=0;myled4=1;wait(0.2);myled4=0;
pin1=0;pin2=1;pin3=1;pin4=0;myled3=1;wait(0.2);myled3=0;
pin1=0;pin2=0;pin3=1;pin4=1;myled2=1;wait(0.2);myled2=0;
pin1=1;pin2=0;pin3=0;pin4=1;myled1=1;wait(0.2);myled1=0;
}
}
}
