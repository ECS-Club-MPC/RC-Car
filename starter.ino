#define rv2 A0
#define rv1 A3
#define sw1 2
#define sw2 32 
#define sw3 1
#define d2  10
#define d3  11 
#define d4  2
#define d5  2
struct packet {
  bool button1;
  bool button2;
  bool switch1;
  bool switch2;
  bool switch3;
  int knob1;
  int knob2;
  int joystick1x;
  int joystick1y;
  int joystick2x;
  int joystick2y;
};
  struct packet control; 

 void setup () {
  Serial.begin(9600);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  pinMode(d2, INPUT_PULLUP); 
  pinMode(d3, INPUT_PULLUP);
  pinMode(d4, INPUT_PULLUP);
  pinMode(d5, INPUT_PULLUP);


 }
void loop () {
  control.switch1 = digitalRead(sw1);
  control.switch2 = digitalRead(sw2);
  control.switch3 = digitalRead(sw3);
  control.knob1   = analogRead(rv1);
  control.knob2   = analogRead(rv2);


}
