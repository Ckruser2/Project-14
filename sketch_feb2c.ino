long base = 0;
long exponent = 0;
double result = 0;
long a = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  base = 0; 
  exponent = 0;
  result = 0;
  //base
  Serial.print("Enter Base.\n");
  Serial.flush();
  while (Serial.available() == 0)
  {
  }
  while (Serial.available() > 0)
  {
    base = base * 10; 
    a = Serial.read() - '0';
    base = base + a;
    delay(5);
  }
  Serial.print("Enter Exponent.\n");
  Serial.flush();
  while (Serial.available() == 0)
  {
  }
  while (Serial.available() > 0)
  {
  exponent = exponent * 10; 
  a = Serial.read() - '0';
  exponent = exponent + a;
  delay(5);
  }
  Serial.println(base);
  Serial.print(" to the power of ");
  Serial.println(exponent);
  Serial.print(" is ");
  result = pow(base , exponent);
  Serial.println(result);
}