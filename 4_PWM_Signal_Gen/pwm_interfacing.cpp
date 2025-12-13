#include "mbed.h"
AnalogIn act(p15);
PwmOut adj(LED1);
int main()
{
//l1.period(0.010);
while(1)
{
adj=act;
wait(0.1);
}
}
