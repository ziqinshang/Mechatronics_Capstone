int PWM1 = 10;   
int INA1 = A2;
int INB1 = A4;                         
int PWM2 = 11;   
int INA2 = A3;
int INB2 = A5;
int s1 = 0;//initial values for each pin on sensor
int s2 = 0;
int s3 = 0;
int s4 = 0;
int s5 = 0;
int s6 = 0;
int s7 = 0;
int s8 = 0;                 
void setup() 
{ 
  Serial.begin(9600);
  pinMode(PWM1, OUTPUT);   
  pinMode(INA1, OUTPUT);
  pinMode(INB1, OUTPUT);
  pinMode(PWM2, OUTPUT);   
  pinMode(INA2, OUTPUT);
  pinMode(INB2, OUTPUT);  
  for (int i = 2; i <= 9; i++) pinMode(i, INPUT_PULLUP); // set pin 2-9 to input with pull up
} 
void loop() 
{ 
  s1 = digitalRead(2);
  s2 = digitalRead(3);
  s3 = digitalRead(4);
  s4 = digitalRead(5);
  s5 = digitalRead(6);
  s6 = digitalRead(7);
  s7 = digitalRead(8);
  s8 = digitalRead(9);
  digitalWrite(INA1,LOW); //motor 1 and 2 turning forward  
  digitalWrite(INA2,LOW); //motor 1: left motor
  digitalWrite(INB1,HIGH);   //motor 2: right motor
  digitalWrite(INB2,HIGH);
  if(s1==1 && s2==0 && s3==0 && s4==0 && s5==0 && s6==0 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Going Straight");
    analogWrite(PWM1,75);
    analogWrite(PWM2,75);
  }
    if(s1==1 && s2==0 && s3==0 && s4==0 && s5==0 && s6==0 && s7==0 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Going Straight");
    analogWrite(PWM1,75);
    analogWrite(PWM2,75);
  }
    if(s1==1 && s2==1 && s3==0 && s4==0 && s5==0 && s6==0 && s7==0 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Going Straight");
    analogWrite(PWM1,75);
    analogWrite(PWM2,75);
  }
    if(s1==1 && s2==0 && s3==0 && s4==0 && s5==0 && s6==0 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Going Straight");
    analogWrite(PWM1,75);
    analogWrite(PWM2,75);
  }
    if(s1==1 && s2==1 && s3==0 && s4==0 && s5==0 && s6==0 && s7==0 && s8==0){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Left slightly");
    analogWrite(PWM2,70);
    analogWrite(PWM1,80);
  }
    if(s1==1 && s2==1 && s3==1 && s4==0 && s5==0 && s6==0 && s7==0 && s8==0){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Left moderately");
    analogWrite(PWM2,60);
    analogWrite(PWM1,90);
  }
    if(s1==1 && s2==1 && s3==1 && s4==1 && s5==0 && s6==0 && s7==0 && s8==0){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Left intensely");
    analogWrite(PWM2,50);
    analogWrite(PWM1,100);
  }
    if(s1==0 && s2==0 && s3==0 && s4==0 && s5==0 && s6==0 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Right slightly");
    analogWrite(PWM2,80);
    analogWrite(PWM1,70);
  } 
    if(s1==0 && s2==0 && s3==0 && s4==0 && s5==0 && s6==1 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Right moderately");
    analogWrite(PWM2,90);
    analogWrite(PWM1,60);
  } 
    if(s1==0 && s2==0 && s3==0 && s4==0 && s5==1 && s6==1 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Turing Right intensely");
    analogWrite(PWM2,100);
    analogWrite(PWM1,50);
  } 
    if(s1==1 && s2==1 && s3==1 && s4==1 && s5==1 && s6==1 && s7==1 && s8==1){
    displaysensorvalue(s1,s2,s3,s4,s5,s6,s7,s8);
    Serial.print("Vehicle Stopped,no signal detected");
    digitalWrite(INA1,LOW);
    digitalWrite(INB1,LOW);   
    digitalWrite(INA2,LOW);    
    digitalWrite(INB2,LOW); 
  } 
  delay(100);
}  
void displaysensorvalue(int s1,int s2,int s3,int s4,int s5,int s6,int s7,int s8){
  Serial.print(s1);
  Serial.print(s2);
  Serial.print(s3);
  Serial.print(s4);
  Serial.print(s5);
  Serial.print(s6);
  Serial.print(s7);
  Serial.print(s8);
  Serial.print("\n");
}
