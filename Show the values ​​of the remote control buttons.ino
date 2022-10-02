// watch the TUTO-video https://youtu.be/ejY6sIXKbmI
// by ADDEROS
#include <IRremote.h>
IRrecv recv(A2);
void setup() {
  // put your setup code here, to run once:
recv.enableIRIn();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(recv.decode()){
Serial.println(recv.decodedIRData.decodedRawData, HEX);
delay(50);
recv.resume();
}}
