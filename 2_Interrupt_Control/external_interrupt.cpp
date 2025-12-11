#include "mbed.h"
DigitalOut led1(LED1); // Configure onboard LED
InterruptIn s(p6); // Configure push button
DigitalOut d(p8); //Configure external LED

void task2() // Interrupt service routine
{
    for(int i = 0; i < 7; i++) // Execute loop 7 times
    {
        d = 1; //Turn ON external LED
        wait(2); // Delay
        d = 0; // Turn OFF external LED
        wait(2); // Delay
    }
}

int main() // Continuous background execution
{
    s.rise(&task2); // Execute task2 function when button is ON (on rising edge)

    while (1) // Continuous execution
    {
        led1 = 1; // Turn ON onboard LED
        wait (1); // Delay
        led1 = 0; // Turn OFF onboard LED
        wait (1); //Delay
    }
}
