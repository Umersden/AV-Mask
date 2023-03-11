
int data;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(3,OUTPUT);
}

void loop() {
data = analogRead(A0);
Serial.println(data);
if(data<=500)
{analogWrite(3,0);}
else if(data<800 && data>700)
{analogWrite(3,800);}
else if(data<=1023&&data>=800)
analogWrite(3,1023);
else if(data<=501&&data>=600)
analogWrite(3,500);
else if(data<=601&&data>=700)
analogWrite(3,650);
}
