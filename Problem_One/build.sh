# Matthew Dingman
# Professor Qouneh

# build.sh build file

# This file builds an executable file for the test_analog.cpp file. The
# AnalogIn.cpp and AnalogIn.h files are used to call the AnalogIn class.

echo "Creating build file.."

g++ -g test_analog.cpp AnalogIn.cpp -o test_analog

echo "Build file created!"
