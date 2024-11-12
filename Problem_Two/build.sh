# Matthew Dingman
# Professor Qouneh

# build.sh build file

# This file is used to create an executable for the test_all_App.cpp file.

echo "Configuring external LED pin.."

config-pin p9.12 gpio

echo out > /sys/class/gpio/gpio60/direction

echo "External LED configured!"

echo 

echo "Configuring button pin.."

config-pin p8.16 gpio_pu

echo in > /sys/class/gpio/gpio46/direction

echo "Button configured!"

echo

echo "Creating build file..."

g++ -g test_all_App.cpp makeLEDs.cpp AnalogIn.cpp GPIO.cpp -o test_all_App -pthread
#AnalogIn.cpp GPIO.cpp makeLEDs.cpp -o test_all_App

echo "Build file created!"
echo 
echo "End of script!"
