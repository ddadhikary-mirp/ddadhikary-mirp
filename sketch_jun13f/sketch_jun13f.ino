#define YP A0
#define YN A1
#define  XP A2  
#define XN A3
#define Xresolution  740
#define Yresolution  645
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 
int X,Y;
 pinMode(YP,INPUT); 
  digitalWrite(YP,HIGH);
   pinMode(YN,INPUT);  
   digitalWrite(YN,LOW);
   pinMode(XP,OUTPUT);
   digitalWrite(XP,HIGH);
   pinMode(XN,OUTPUT);
   digitalWrite(XN,LOW);
   X = (analogRead(YP))/(740/Xresolution); 
   pinMode(XP,INPUT);
   pinMode(XN,INPUT);
   digitalWrite(XN,LOW);
   pinMode(YP,OUTPUT);
   digitalWrite(YP,HIGH);
   pinMode(YN,OUTPUT);
   digitalWrite(YN,LOW);
   Y = (analogRead(XP))/(645/Yresolution);
  
   Serial.print("X = ");  
   Serial.print(X);
   Serial.print(" Y = ");
   Serial.println(Y);
   delay(100);
}

