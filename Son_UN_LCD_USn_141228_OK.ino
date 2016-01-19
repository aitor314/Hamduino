// Ultrasonic - Library for HR-SC04 Ultrasonic Ranging Module.
// Rev.4 (06/2012)
// J.Rodrigo ( www.jra.so )
// more info at www.ardublog.com



//NO FUNCIONA CHOCA EL SONAR CON EL LCD


#include <Ultrasonic.h>
#include <LiquidCrystal.h>


//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD arduino library
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  

Ultrasonic ultrasonic(11,12,12000); // (Trig PIN,Echo PIN)

void setup() {
lcd.begin(16, 2);
 	pinMode(10, OUTPUT); 	 // pin 10 is LCD backlight brightness (PWM)
	analogWrite(10, 100);  // 0 a 255
 


  pinMode(3, OUTPUT); // VCC pin
  pinMode(13, OUTPUT); // GND ping
  digitalWrite(3, HIGH); // VCC +5V mode  
  digitalWrite(13, LOW);  // GND mode
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(ultrasonic.Ranging(CM)); // CM or INC
  lcd.print("cm");
  delay(100);
}
