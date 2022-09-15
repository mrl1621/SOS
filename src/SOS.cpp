/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/scorp/OneDrive/Desktop/OCN479/SOS/src/SOS.ino"
// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
void setup();
void loop();
#line 5 "c:/Users/scorp/OneDrive/Desktop/OCN479/SOS/src/SOS.ino"
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);
// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.

void loop() {
  digitalWrite(MY_LED, HIGH);  //long blink 
  delay(400);                       
  digitalWrite(MY_LED, LOW); 
  delay(400);                      
  digitalWrite(MY_LED, HIGH);  //long blink
  delay(400); 
  digitalWrite(MY_LED, LOW);   
  delay(400);
  digitalWrite(MY_LED, HIGH);  //long blink
  delay(400);
  digitalWrite(MY_LED, LOW);   
  delay(400); 
  digitalWrite(MY_LED, HIGH);  //long blink
  delay(400);                       
  digitalWrite(MY_LED, LOW);    
  delay(200);                      
  digitalWrite(MY_LED, HIGH);  //short blink
  delay(200); 
  digitalWrite(MY_LED, LOW);
  delay(200);
  digitalWrite(MY_LED, HIGH);  //short blink
  delay(200);
  digitalWrite(MY_LED, LOW);
  delay(200);
  digitalWrite(MY_LED, HIGH);  //short blink
  delay(200);
  digitalWrite(MY_LED, LOW);
}