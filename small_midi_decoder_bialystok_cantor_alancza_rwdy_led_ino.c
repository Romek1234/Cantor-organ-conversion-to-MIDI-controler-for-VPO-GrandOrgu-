// Small Midi dekoder Midi - R. Milewski
//Turns on Led 13 when GradOrgue in PC is ready to play!
//GO lights the "Noise Motor" manubrium and this sends a MIDI noteOn message of (value) 71 on channel 13
#include <MIDI.h>   // Add Midi Library
 
//#define LED 13 
//#define LED2 12// Arduino Board LED is on Pin 13
 
//Create an instance of the library with default name, serial port and settings
MIDI_CREATE_DEFAULT_INSTANCE();
 
void setup() {

pinMode (A0, OUTPUT); // Set Arduino board analog pins to output
digitalWrite (A0, LOW);
pinMode (A1, OUTPUT);
digitalWrite (A1, LOW);
pinMode (A2, OUTPUT);
digitalWrite (A2, LOW);
pinMode (A3, OUTPUT);
digitalWrite (A3, LOW);
pinMode (A4, OUTPUT);
digitalWrite (A4, LOW);
pinMode (A5, OUTPUT);

 

  for (int a=2; a<14; a++)
{
pinMode (a, OUTPUT); // Set Arduino board digital pins to output
digitalWrite (a, LOW); // Set Arduino board digitsl pins to KIGH
    
}
 
