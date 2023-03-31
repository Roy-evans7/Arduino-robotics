int ena1 = 36;
int ena3 = 34;
int ena4 = 35;

//motor 2 variables
int enb = 39;
int en3 = 32;
int in4 = 33;

void forward()
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);


void backward(
  analogWrite(in1, HIGH);
  analogWrite(in2, LOW);

  
analogWrite(in3, HIGH);
analogWrite(in4, LOW);

analogWrite(ena, 150);
analogWrite(enb, 150);



void reverse()
analogWrite(in1, HIGH);
  analogWrite(in2, LOW);

  
analogWrite(in3, HIGH);
analogWrite(in4, LOW);

analogWrite(ena, 150);
analogWrite(enb, 150);

void setup()










void setup(){
  pinmode(ena, OUTPUT)
 pinmode(in1,OUTPUT ) 
 pinMode(in2, OUTPUT)
 pinMode(enb, OUTPUT)
 pinmode(in3, OUTPUT)
 pinMode(in4, OUTPUT)



}



void loop()
