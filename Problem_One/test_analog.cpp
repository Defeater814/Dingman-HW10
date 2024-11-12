// Matthew Dingman
// Professor Qouneh

// test_analog.cpp application file

// This file utilizes the AnalogIn class to read analog values from a
// temperature sensor. The class is instantiated, calls the getNumber() object,
// then calls the readAdcSample() object.

// Example invocation: ./test_analog

#include<iostream>
#include<string>
#include<fstream>
#include"AnalogIn.h"
using namespace std;

int main(int argc, char* argv[]) {
  AnalogIn thermo(0);
  
  cout << "The number retrieved is: " << thermo.getNumber() << endl;

  cout << "The ADC sample is: " << thermo.readAdcSample() << endl;
}
