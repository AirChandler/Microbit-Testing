// Microbit fun, Chandler Keep, 22/06/2020
#include "Microbit.h"

MicroBit uBit;
MicroBitStorage storage;
MicroBitSerial serial(USBTX, USBRX); //Transmitter/Receiver ref.
MicroBitThermometer thermometer(storage);

int main() {
	uBit.init(); //Initialises thread
	while(true){
		uBit.display.scroll("HELLO");
		serial.send("Hello\n");
		uBit.display.scroll(thermometer.getTemperature());
	}
	release_fiber(); //Releases the thread
}