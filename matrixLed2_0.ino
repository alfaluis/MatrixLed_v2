#include <avr/pgmspace.h>
#include <Arduino.h>
#include <LibraryLed.h>
#include <SoftwareSerial.h>
#include <MemoryFree.h>
#include "alpabethic8x8.hpp"

#define DATA   12
#define HEIGH_MATRIX 8
#define WIDTH_MATRIX 48
#define PIXELS (HEIGH_MATRIX * WIDTH_MATRIX)
// port used must be PORTB and PIN 12. Change it requires modify header file
LibraryLed leds(DATA, PIXELS);
SoftwareSerial mySerial(10, 11); // RX, TX


// **************** functions definition *************************

void textContatenation(String&, byte []);
//void updateMatrix(byte [], uint32_t,  int, int = 500);
//String createInterString(String);
uint8_t returnIndexVowel(char);
void mySerialEvent();


//The setup function is called once at startup of the sketch
void setup () {
	Serial.begin(9600);
	// wait for serial port to connect. Needed for native USB port only
	while (!Serial) {}
	// set the data rate for the SoftwareSerial port (bluetooth connection)
	mySerial.begin(19200);
}

// **************** Variable definition **************************
char color[7] = {'0','0','0','0','1','1','\0'};
String inputString = "";
int stringLength = 0;

boolean stringComplete = false;  // whether the string is complete
boolean newText = false;
byte byteText [800];
// ***************************************************************



// The loop function is called in an endless loop
void loop () {
	if (mySerial.available()) mySerialEvent();

	String defaultText = "DEFAULT TEXT";
	uint32_t colorNum = strtol(color, NULL, 16);
	defaultText = createInterString(defaultText);
	textContatenation(defaultText, byteText);
	stringLength = defaultText.length();
	int lengthScroll = (stringLength - WIDTH_MATRIX / 8) * wordSize[0];
	Serial.println(lengthScroll);
	// for to scroll texts
	for (int scroll = 0; scroll < lengthScroll; scroll++) {
		updateMatrix(byteText, colorNum, scroll, 200);
	}


	Serial.print(F("freeMemory()="));
	Serial.println(freeMemory());
	delay(1000);
}

// ******************* FUNCTIONS *******************************

uint8_t returnIndexVowel(char text){
	return (uint8_t)text - 32;
}

void textContatenation(String& text, byte text2matrix[]) {

	for (uint8_t i = 0; i < text.length(); i++) {
		uint8_t index = returnIndexVowel(text[i]);

		for (int r = 0; r < 8; r++) {
			text2matrix[r + i * 8] = pgm_read_byte_near(alpabethics + (index * 8 + r));
		}
	}
}

void updateMatrix(byte matrixText[], uint32_t rgb, int scroll, int updateTime) {
	// show as many words as possible
	cli();
	for (int col = scroll; col < WIDTH_MATRIX + scroll; col++) {
		for (int i = 0; i < HEIGH_MATRIX; i++) {
			/*
			if ((matrixText[col] << i & 0x80) == 0x80) {
				leds[i + (col - scroll) * 8] = rgb;
			} else {
				leds[i + (col - scroll) * 8] = Colors::Black;
			}
			*/
			if ((matrixText[col] << i & 0x80) == 0x80) {
				leds.sendPixel(rgb);
			} else {
				leds.sendPixel(static_cast<uint32_t>(Colors::Black));
			}
		}
	}
	sei();
	leds.show();
	delay(updateTime);
}

String createInterString(String text){
	for(int n = 0; n < WIDTH_MATRIX / 8; n++){
		if(n % 2 == 0){
			text += " ";
		} else {
			text += ":";
		}
	}
	return text;
}

// serial event for software serial connection. Port defined by user (example: port 10 and 11)
void mySerialEvent(){
	int index = 0;
	while(mySerial.available()){
		char a = mySerial.read();
		if (a == '\r' || a == '\n') {
			stringComplete = true;
		}
		else {
			if(index <= 5){
				color[index] = a;
				index ++;
			}
			else{
				inputString += a;
				index ++;
			}
		}
		delay(2);
	}
}
