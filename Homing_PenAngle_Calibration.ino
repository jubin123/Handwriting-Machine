#include <Servo.h>

// Servo on PWM pin 15
const int penServoPin = 15;
const int penDelay = 50; //

//servo angle for up and down
const int penUp = 90;
const int penDown = 125;

// defines pins numbers
const int xstepPin = 12;
const int xdirPin = 11;
const int ystepPin = 13;
const int ydirPin = 14;
const int Origin = 0;
const int Away = 1;
const int xlimit = 25;
const int ylimit = 26;

const int Control = 24;

int xDir,yDir;

Servo pen;

// Should be right for steppers, microstepping (3200)
const int xstepsPerRevolution = 64;
const int ystepsPerRevolution = 64;

void xstepper_rev(int xdir)
{
  //set the direction of rotation
  digitalWrite(xdirPin, xdir);
 
//one revolution
    digitalWrite(xstepPin, HIGH);
    delayMicroseconds(800);
    digitalWrite(xstepPin, LOW);
    delayMicroseconds(800);
  
}

void ystepper_rev(int ydir)
{
  //set the direction of rotation
  digitalWrite(ydirPin, ydir);
  
  //one revolution
  
    digitalWrite(ystepPin, HIGH);
    delayMicroseconds(800);
    digitalWrite(ystepPin, LOW);
    delayMicroseconds(800);
  
}
void setup()
{
  
  Serial.begin(9600);

  pinMode(xstepPin, OUTPUT);
  pinMode(xdirPin, OUTPUT);
  pinMode(ystepPin, OUTPUT);
  pinMode(ydirPin, OUTPUT);
  pen.attach(penServoPin);
  pen.write(penUp);
  delay(500);
  
  pinMode(xlimit, INPUT);
  pinMode(ylimit, INPUT);
  
  pinMode(Control, INPUT);
}

void loop()
{
  if (digitalRead(Control) == LOW)
    {
      pen.write(penDown);
      int c = digitalRead(xlimit);
      int d = digitalRead(ylimit);
      if ((c == 0) && (d == 0))
      {
        xstepper_rev(Origin);
      }
      else if ((c == 0) && (d == 1))
      {
        xstepper_rev(Away);
      }
      else if ((c == 1) && (d == 0))
      {
        ystepper_rev(Origin);
      }
      else if ((c == 1) && (d == 1))
      {
        ystepper_rev(Away);
      }
    }
  pen.write(penUp);
}
