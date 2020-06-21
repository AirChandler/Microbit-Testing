#include "Microbit.h"

MicroBit uBit;
MicroBitStorage storage;
MicroBitThermometer thermometer(storage);

int main() {
	uBit.init();
	while(true){
		uBit.display.scroll("HELLO");
		uBit.display.scroll(thermometer.getTemperature());
	}
	release_fiber();
}