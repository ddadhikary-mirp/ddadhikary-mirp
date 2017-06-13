
#define A0 X1
#define A1 X2
#define A2 Y1
#define A3 Y2
//Define your screen resolution as per your Touch screen (Max: 1024)
#define Xresolution 320 //128
#define Yresolution 240 //64





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int X,Y; //Touch Coordinates are stored in X,Y variable
   pinMode(Y1,INPUT);
   pinMode(Y2,INPUT);  
   digitalWrite(Y2,LOW);
   pinMode(X1,OUTPUT);
   digitalWrite(X1,HIGH);
   pinMode(X2,OUTPUT);
   digitalWrite(X2,LOW);
   X = (analogRead(Y1))/(1024/Xresolution); //Reads X axis touch position
    
   pinMode(X1,INPUT);
   pinMode(X2,INPUT);
   digitalWrite(X2,LOW);
   pinMode(Y1,OUTPUT);
   digitalWrite(Y1,HIGH);
   pinMode(Y2,OUTPUT);
   digitalWrite(Y2,LOW);
   Y = (analogRead(X1))/(1024/Yresolution); //Reads Y axis touch position
  
  //Display X and Y on Serial Monitor
   Serial.print("X = ");  
   Serial.print(X);
   Serial.print(" Y = ");
   Serial.println(Y);
   delay(100);
}
