#define motor_pin5 5
#define motor_pin6 6

void setup() 
{
  pinMode(motor_pin5, OUTPUT);
  pinMode(motor_pin6, OUTPUT);
}

void loop() 
{
  run(255, 5);
}

void run (int velocity, int direction) 
{
  if (direction == 5) 
  {
    analogWrite(motor_pin5, velocity);
    pinMode(motor_pin5, OUTPUT);
    pinMode(motor_pin6, INPUT);
  }

  if (direction == 6)
  {
    analogWrite(motor_pin6, velocity);
    pinMode(motor_pin6, OUTPUT);
    pinMode(motor_pin5, INPUT);
  }
}