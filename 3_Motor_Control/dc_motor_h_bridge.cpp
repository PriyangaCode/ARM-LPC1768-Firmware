#include "mbed.h"
PwmOut t1(p21); // Configuring pins as PWM out
PwmOut t2(p22);
PwmOut t3(p23);
PwmOut t4(p24);
int main()
{
while(1) // Continuous execution
{
t1 = 1;t2=0;t3=0;t4=1; //clockwise rotations
wait(0.2); //delay
t1 = 0;t2=1;t3=1;t4=0; //Anticlock wise rotations
wait(0.2);
}
}
