int flame=A5;//Defining the analog port A5
 int Beep=8;//Defining the digital port 8
 int val=0;//Declarations of variables
void setup() 
{
	pinMode(Beep,OUTPUT);//Defining the digital port for the output port
	pinMode(flame,INPUT);//Defining the analog port for the input port
	Serial.begin(9600);//The baud rate is 9600
	val=analogRead(flame);//Read analog port voltage
}
 
void loop() 
{  
       Serial.println(analogRead(flame));//The serial port sends the simulated voltage value
	if((analogRead(flame)-val)>=600)//Determine whether the simulated voltage value is greater than 600
		digitalWrite(Beep,HIGH); 
        else
                digitalWrite(Beep,LOW);
}
