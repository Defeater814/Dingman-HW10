// Matthew Dingman
// Professor Qouneh

// test_all_App.cpp application file

// This file uses Molloy's textbook classes LED, GPIO, and my AnalogIn class to
// control gpio pins. It turns on LEDs 1 and 3, flashes LED 2, reads the
// temperature sensor and displays the value, reads the push button, and turns
// on the external LED is the push button was pressed.

// Example invocation: ./test_all_App

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"AnalogIn.h"
#include"GPIO.h"
#include"makeLEDs.h"
using namespace std;
using namespace exploringBB;

int main(int argc, char* argv[]) {
  LED leds[4] = { LED(0), LED(1), LED(2), LED(3) }; // Defines GPIO pins, LEDs, and Temp pin
  AnalogIn temp(0);
  GPIO BUTTON(46), EXTLED(60);

  leds[1].turnOn(); // Turns LEDs 1 and 3 on, then flashes LED 2 every 50 ms
  leds[3].turnOn();
  leds[2].flash("50");

  cout << "The temperature sensor's value is: " << temp.readAdcSample() << endl; // Reads the temperature sensor's value and prints it
  
  string value = to_string(BUTTON.getValue()); // Saves and prints the buttons value
  cout << "The value of the button is: " << value << endl;
  
  if (value == "1") { // If button is pressed, turn LED on, else turn it off
    cout << "Button is not pressed, external LED turning off.." << endl;
    EXTLED.setValue(LOW);
  }
  else {
    cout << "Button is presssed, external LED turning on.." << endl;
    EXTLED.setValue(HIGH);
  }

  cout << "End of script!" << endl;
}
