/*Saw tooth waveform on DAC output.View on oscilloscope*/
#include "mbed.h"
AnalogOut Aout(p18);
float i;
int main() {
while(1){
for (i=0;i<1;i=i+0.2){//i is incremented in steps of 0.1
Aout=i;
wait(0.001); //wait 1 millisecond
}
}
}
