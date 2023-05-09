/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground through 220 ohm resistor

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
// const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

const int analogInPinX = A0;
const int analogInPinY = A1;
const int analogInPinZ = A2;

int sensorValueX = 0;        // x kiihtyvyyttä vastaava sensoriarvo 10 bittisessä järjestelmässä (0-1023)
int sensorValueY = 0;        // Y kiihtyvyyttä vastaava sensoriarvo 10 bittisessä järjestelmässä (0-1023)
int sensorValueZ = 0;        // Z-kiihtyvyyttä vastaava sensoriarvo 10 bittisessä järjestelmässä (0-1023)
unsigned long aika = 0;      // aikaleima, joka luetaan millisekuntteina. int tyyppinen määrittely tuottaisi nopean ylivuodon
int sisaanmeno = 0;  // testi ollaanko menossa sisään ohjelmaan ekaa kertaa


float AccX = 0.0;  // voitte myös käyttää float tilalla double(desimaaliarvot)
float AccY = 0.0;
float AccZ = 0.0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {

  if(sisaanmeno==0){
  // read the analog in value:
  delay(500); // annetaan aikaa käynnistelylle
  Serial.print("Time(ms)");  //tulostetaan aluksi tiedot mitä ollaan tulostamassa
  Serial.print("\t Acc_x");
  Serial.print("\t Acc_y");
  Serial.print("\t Acc_z");
  Serial.println("\t A"); //tulostus ja rivinvaihto
  sisaanmeno = 1;   //Vaihdetaan tunnistetieto niin tänne ei enää tulla
 
}

sensorValueX=analogRead(analogInPinX);
sensorValueY=analogRead(analogInPinY);
sensorValueZ=analogRead(analogInPinZ);
aika = millis();

//muutetaan saadut sensoriarvot kiihtyvyysarvoiksi
AccX = 0.1474*sensorValueX - 48,56;
AccY = 0.1464*sensorValueY - 47,377;
AccZ = 0.1497*sensorValueZ - 48,967;


//print the results to the serial monitor
Serial.print(aika);
Serial.print("\t;");
Serial.print(AccX);
Serial.print("\t;");
Serial.print(AccY);
Serial.print("\t;");
Serial.println(AccZ);

//wait 2 millisedonds before the next loop
//for the analog-todigital converter to settle
//after the last reading:
delay(100);    //Nyt ei vielä pyritä kovin nopeaan mittauksen kun vasta kaliboirdaan. 100ms viive
}
