int soil=A0;
void setup()
{
  pinMode(soil,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int result=analogRead(soil);
  Serial.println(result);
}
