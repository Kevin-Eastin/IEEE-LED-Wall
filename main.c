/* 
 * File:   block1.c
 * Author: palom
 *
 * Created on September 22, 2017, 3:32 PM
 */


#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#define _XTAL_FREQ 16000000      //defines frequency to use delay function
#include <xc.h>

//use this function to give a "Zero Pulse"
//function calls seem to mess up the timing of the pulses.
//only using these functions to save my hardcode pulses
void ZeroPulse() {
    //these delays give a pos:500nS and neg: 1.500uS with 500Hz
    //Code for a zero pulse:
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //
}

//Use this function to give a "One Pulse"
//function calls seem to mess up the timing of the pulses
void runOne() {
    //through testing, i decided on this delay for the one pulse
    //results in pos:1.500 and neg:738 with a freq of 446Hz
    //thanks to the +-150nS, the 1.500:738 ratio SHOULD be OKAY. shrug
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
}
void runRed() {
    //Code for 8 zeroes:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    /////////////////////////////////////////
    /////////////////////////////////////////////////
    //Code for 8 one pulses:
    //Code for a one pulse:
    //1
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //2
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //3
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //4
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //5
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //6
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //7
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //8
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    /////////////////////////////////////////////
    //Code for 8 zeroes:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    /////////////////////////////////////////
}
void runGreen() {
    //Code for 8 one pulses:
    //Code for a one pulse:
    //1
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //2
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //3
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //4
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //5
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //6
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //7
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //8
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    /////////////////////////////////////////////
    //Code for 8 zeroes:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    /////////////////////////////////////////
    //Code for 8 more zero pulses:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    
    
}
//Call this function to make the strip BLUE
void runBlue() {
    //Code for 8 zeroes:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    /////////////////////////////////////////
    //Code for 8 more zero pulses:
    //Code for a zero pulse:
    //1
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //2
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //3
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //4
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //5
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //6
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //7
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    //Code for a zero pulse:
    //8
    PORTA = 0b00000001;
    __delay_us(.1);
    PORTA = 0b00000000;
    __delay_us(.3);
    /////////////////////////////////////////////////////
    //Code for 8 one pulses:
    //Code for a one pulse:
    //1
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //2
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //3
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //4
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //5
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //6
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //7
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
    //Code for a one pulse:
    //8
    PORTA = 0b00000001; 
    __delay_us(0.5);
    PORTA = 0b00000000;
}
////////////////////////////////
///////////MAIN////////////////
///////////////////////////////
void manyGreens() {
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
    runGreen();
}
main()
{
    OSCCON = 0b01111010;        //frequency
    ANSELA = 0b00000000;        //setting port A to digital outputs
    TRISA = 0b00000000;
   // PORTA = 0b00000001;
   //t counts the 'transmission'
    int c = 0; //c represents the color i'm on.
    const int LEDS = 27;//number of led's for looping sake
    runBlue();
    runBlue();
    __delay_us(1000000);
    runRed();
//    while(1)
//    {
//        //I want to switch between the entire strip being green, 
//        //and the entire strip being blue.
//        
//        //if c==0, make the whole strip green:
//     
//            //runGreen, 27 times, because there are 27 led lights
//        runRed();
//        
//        
//            //c = 1;
//        
//        //Then regardless, run the reset code:
////        PORTA = 0b00000000;
////        _delay(10000);
//        //__delay_us(60);           
////                ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        
////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        ///CODE FOR A 0
////        PORTA = 0b00000000;
////        PORTA = 0b00000001;
////        __delay_us(.1);
////        //////////////////////////
////        
////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
////        ///////////////////////////
////        /////CODE FOR A 1
////        PORTA = 0b00000000; 
////        NOP();
////        PORTA = 0b00000001;
////        NOP();
//        ///////////////////////////
//        //////////////////////////BLUE//////////////////////////////////////////      
//    }
}
