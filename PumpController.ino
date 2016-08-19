/*
  Solar Dual Pump Controller
  Checks boolean full or not on two water tanks.
  Waits 10 minutes on low signal, then turns on pump and opens valve to low tank.
 */


// the setup function runs once when you press reset or power the board
const int Pump=0;
const int Valve1 = 1;
const int Valve2 = 2;
const int FloatSwitch1 = 6;
const int FloatSwitch2 = 7;
const int StatusLamp1 = 11;
const int StatusLamp2 = 12;
const bool TestMode = 1;
int CountDown1=0;
int Switch1State = 0;
int Switch2State = 0;
int Switch1StateCount = 0;
int Switch2StateCount = 0;
int PumpState = 0;
void setup() {
  pinMode(Pump,OUTPUT);
  pinMode(Valve1, OUTPUT);
  pinMode(Valve2, OUTPUT);
  pinMode(FloatSwitch1,INPUT);
  pinMode(FloatSwitch1,INPUT);
  pinMode(StatusLamp1, OUTPUT);//Make sure status LED 1 is off.
  pinMode(StatusLamp2, OUTPUT);//Make sure status LED 2 is off.
  digitalWrite(Valve1, LOW);  // Make sure valve 1 is off.
  digitalWrite(Valve2, LOW);  // Make sure valve 2 is off.
  digitalWrite(Pump, LOW);    // Make sure pump is turned off.
  delay(100); //wait for 1 minute, to allow incoming power to stabilize.
}
// the loop function runs over and over again forever
void loop() {
  if (TestMode) {
      digitalWrite(Valve1,HIGH);
      digitalWrite(Valve2,LOW);
      delay(5000);
      digitalWrite(Valve1,LOW);
      digitalWrite(Valve2, HIGH);
      delay(5000);  
  } 
}
