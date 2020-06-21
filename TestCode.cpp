#include "Microbit.h"

MicroBit uBit;

int main() {
	uBit.init();
	while(true){
		uBit.display.scroll("HELLO");
	}
	release_fiber();
}