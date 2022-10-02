#include <IRremote.h>
IRrecv recv(6);
void setup() {
  // put your setup code here, to run once:
recv.enableIRIn();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(recv.decode()){
  if(recv.decodedIRData.decodedRawData == 0xEA15FF00){
    Serial.println("volume up");
  }
  if(recv.decodedIRData.decodedRawData == 0xF807FF00){
    Serial.println("volume down");
  }
  if(recv.decodedIRData.decodedRawData == 0xBC43FF00){
    Serial.println("pause");
  }
  if(recv.decodedIRData.decodedRawData == 0xBF40FF00){
    Serial.println("next");
  }
  if(recv.decodedIRData.decodedRawData == 0xBB44FF00){
    Serial.println("prev");
  }
delay(50);
recv.resume();
} 
}
