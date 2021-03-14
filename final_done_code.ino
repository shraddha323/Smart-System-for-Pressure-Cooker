const int buttonPin = 12;     // the number of the pushbutton pin
const int buttonPowerPin =  13;      // the number of the LED pin
const int buzzerPin = A1; // the number of buzzer pin
int buttonState=0; 
int counter=1;
int lastButtonState=0;
int digit_sensor = 2; // select the input pin for the potentiometer 
int digitValue ; //  value from the digit input pin 
volatile int state = LOW;
boolean Counterflag = true;
unsigned long start, finished, elapsed;
int count=0;
int i1,i2,i3,i4=0;
//declare variables for 7 segment display
int seg_a = 10; // declare the variables
int seg_b = 11;
int seg_c = 5;
int seg_d = 7;
int seg_e = 6;
int seg_f = 9;
int seg_g = 8;
int seg_dp = 4;
int com = 12;
 void setup()
 {
 pinMode(buttonPin, INPUT);
  pinMode(buttonPowerPin, OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  digitalWrite(buttonPowerPin, HIGH);
  pinMode (digit_sensor, INPUT);

 pinMode(seg_a,OUTPUT); // configure all pins used to outputs
  pinMode(seg_b,OUTPUT);
  pinMode(seg_c,OUTPUT);
  pinMode(seg_d,OUTPUT);
  pinMode(seg_e,OUTPUT);
  pinMode(seg_f,OUTPUT);
  pinMode(seg_g,OUTPUT);
  pinMode(seg_dp,OUTPUT);
  pinMode(com,OUTPUT);
  
  Serial.begin(9600);
  Serial.print("Number of whistles you want=");
 
 }
 void setCounter()
{
  
  start=millis();
  while(elapsed<=20000)    // 50 seconds time is given for setting counter timer
  {
   
  buttontstateChanged();
 printcounterValue();
  finished=millis();
  
  elapsed=finished-start;
  }
  
   Counterflag = false;
   //Serial.print("Number of whistles you want=");
   //Serial.println(counter);
  }




  void printcounterValue()
   
{
   
  switch(counter){
    case 1:
    if(i1==0)
    {
     Serial.println("********************************");
    Serial.println("Number of whistles you want = 1");
    i1=i1+1;
    }
    print1();
    break;
    case 2:
    if(i2==0)
    {
     Serial.println("********************************");
    Serial.println("Number of whistles you want = 2");
    i2=i2+1;
    }
    print2();
    break;
    case 3:
    if(i3==0)
    {
     Serial.println("********************************");
    Serial.println("Number of whistles you want = 3");
    i3=i3+1;
    }
    print3();
    break;
    case 4:
    if(i4==0)
    {
     Serial.println("********************************");
    Serial.println("Number of whistles you want = 4");
    i4=i4+1;
    }
    print4();
    break;
    case 5:
    Serial.println("********************************");
    Serial.println("Number of whistles you want = 5");
    print5();
    break;
    case 6:
    Serial.println("********************************");
    Serial.println("Number of whistles you want = 6");
    print6();
    break;
    case 7:
    Serial.println("********************************");
    Serial.println("Number of whistles you want = 7");
    print7();
    break;
    case 8:
    Serial.println("********************************");
    Serial.println("Number of whistles you want = 8");
    print8();
    break;
    case 9:
    Serial.println("********************************");
    Serial.println("Number of whistles you want = 9");
    print9();
    break;
    
  }
}
// print whistle number into 7 segment display 
void printwhistleValue()
{
  switch(count){
    case 0:
    Serial.println("********************************");
    Serial.print("Number of whistles done = 0");
    print0();
    break;
    case 1:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 1");
    print1();
    break;
    case 2:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 2");
    print2();
    break;
    case 3:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 3");
    print3();
    break;
    case 4:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 4");
    print4();
    break;
    case 5:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 5");
    print5();
    break;
    case 6:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 6");
    print6();
    break;
    case 7:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 7");
    print7();
    break;
    case 8:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 8");
    print8();
    break;
    case 9:
    Serial.println("********************************");
    Serial.println("Number of whistles done = 9");
    print9();
    break;
    
  }
}

void print0()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  
 
 // delay(2000);
}

void print1()
{
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
   
}
void print2()
{
   digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);

}
void print3()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
 
}
void print4()
{
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
 
}
void print5()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
 
}
void print6()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,LOW);
 
}
void print7()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,LOW);
}
void print8()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,LOW);
}

void print9()
{
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,LOW);
}




 void loop()
 {
 

  //Set counter at beginning of program
  if(Counterflag == true)
  
  {
    //Serial.println(Counterflag);

  setCounter();
  }


   digitValue=digitalRead(digit_sensor);
    //Serial.println(digitValue);
   if (digitValue==LOW)
    {
  //    digitalWrite (ledPin, HIGH);
      //Serial.println("yess");
       count=count+1;
       printwhistleValue();
      delay(20000);
      digitValue==HIGH;

       if(count>=counter)
  {
//    println()
    playbuzzer();
  }
    }


   //compares if whistle number is greater than equal to pre-set counter, if yes then kick off buzzer alarm.
 
/*  else 
  { //digitalWrite (ledPin, LOW); 
  Serial.println("noo");
  delay(100);

  }
*/
  
 }

 void playbuzzer()
{
  
  digitalWrite(buzzerPin, HIGH);
  Serial.println("Whistle completed!!!!!!!PLEASE turn OFF the gas");
  delay(20000);
  
  }
void buttontstateChanged(){
    // read the pushbutton input pin:
   
 buttonState = digitalRead(buttonPin);
 //Serial.println("clickkk");
 delay(200);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState)
  {
    // Serial.println("not");
     delay(200);
    // if the state has changed, increment the counter
    if (buttonState == HIGH)
    {
      // if the current state is HIGH then the button went from off to on:
      // Serial.println("okkk");
      counter++;
      //Serial.println("counter");
      //Serial.println(counter);
      
    } else {
     
   }
    // Delay a little bit to avoid bouncing
     
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

  }
