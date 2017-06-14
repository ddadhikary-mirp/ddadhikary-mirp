float previouserror = 0.0, currenterror;
float angleError = 0.02;

void solution (){
  currenterror = desiredX-ballX;
float kp = 0.0002,kd = 0.001;
float val = kp*currenterror;
float speed = currenterror - previouserror;
val += kd * speed;
gotoAngle(val);
previouserror = currenterror;  
  
}