#include "mbed.h"   // Include header file

// Configure seven segment pins as BusOut
BusOut Seg1(p5, p6, p7, p8, p9, p10, p11, p12);

int main() 
{
    while(1)   // Continuous execution
    {
        Seg1 = 0xC0; wait(0.9); // 0
        Seg1 = 0xF9; wait(0.9); // 1
        Seg1 = 0xA4; wait(0.9); // 2
        Seg1 = 0xB0; wait(0.9); // 3
        Seg1 = 0x99; wait(0.9); // 4
        Seg1 = 0x92; wait(0.9); // 5
        Seg1 = 0x83; wait(0.9); // 6
        Seg1 = 0xF8; wait(0.9); // 7
        Seg1 = 0x80; wait(0.9); // 8
        Seg1 = 0x90; wait(0.9); // 9
    }
}

