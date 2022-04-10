#include "Sw18015P.h"
//#define _Byte2Ascii(Value)	(Value = Value + '0')
#if (Vibration == 18015)
#endif
void Vibration_Setup()
{
	
	PinMode(Vibration_connect, Input);
    //DigitalWrite(Vibration_connect, Low);
    PinMode(red, Output);
}
void Vibration_High(){
    
     if(DigitalRead(Vibration_connect)==High){
        DigitalWrite(red, High) ;
     }
     else
     DigitalWrite(red, Low);
}