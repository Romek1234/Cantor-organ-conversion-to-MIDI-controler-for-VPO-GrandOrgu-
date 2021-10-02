/**
 * for ATmega1284p or Arduino mega
 * @brief   This example demonstrates the use of push buttons that send note 
 *          events.
 * 
 * ### Connections
 * 
 *  - 2:  momentary push button (to ground)
 *  - 3:  momentary push button (to ground)
 * 
 * The internal pull-up resistors for the buttons will be enabled automatically.
 * 
 * ### Behavior
 * 
 * Pressing the first button will send note on/off events on middle C.
 * Pressing the second button will send note on/off events for middle C sharp.
 * 
 * Written by PieterP, 28-01-2019  
 * https://github.com/tttapa/Control-Surface
 */

// Include the Control Surface library
#include <Control_Surface.h>

// Instantiate a MIDI over USB interface.
//USBDebugMIDI_Interface midi;
//HardwareSerialMIDI_Interface midi;
//HardwareSerialMIDI_Interface midi = Serial;
HardwareSerialMIDI_Interface midiser = Serial;
//HairlessMIDI_Interface midi;

MIDI_PipeFactory<1> pipes;
// The note numbers corresponding to the buttons in the matrix
const AddressMatrix<4, 14> addresses = {{
  {  36,  37,  38,  39,  40,  41,  42,  43,  44, 45, 46,  47,  48,  49 }, 
  {  50,  51,  52,  53,  54,  55,  56,  57,  58,  59, 60, 61,  62,  63 }, 
  {  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74, 75, 76,  77 }, 
  {  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88, 89, 90,  91 },
   
}};