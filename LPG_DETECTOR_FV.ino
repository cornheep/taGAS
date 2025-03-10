#include <SoftwareSerial.h> 
SoftwareSerial mySerial(9, 10);

int MQ4 = A0; 
int R_LED = 6;
int G_LED = 3;
int Buzzer1 = 5;
int Buzzer2 = 13;
int val;
int MAX = 125;
unsigned long startTime = 0;
bool messageSent = false;

void setup()
{
    mySerial.begin(9600); // Setting the baud rate of GSM Module
    Serial.begin(9600); // Setting the baud rate of Serial Monitor (Arduino)
    pinMode(MQ4, INPUT);
    pinMode(R_LED, OUTPUT);
    pinMode(G_LED, OUTPUT);
    pinMode(Buzzer1, OUTPUT);
    pinMode(Buzzer2, OUTPUT);
}

void loop()
{
    val = analogRead(A0);

    if (val >= MAX && !messageSent)
    {
        startTime = millis();
        messageSent = true;
    }

    if (messageSent)
    {
        unsigned long currentTime = millis();
        if (currentTime - startTime >= 120000) // 120 seconds
        {
            messageSent = false;
            digitalWrite(R_LED, LOW);
            digitalWrite(Buzzer1, LOW);
            digitalWrite(Buzzer2, LOW);
            digitalWrite(G_LED, HIGH);
            Serial.println("NORMAL");
        }
        else
        {
            digitalWrite(R_LED, HIGH);
            digitalWrite(Buzzer1, HIGH);
            digitalWrite(Buzzer2, HIGH);
            digitalWrite(G_LED, LOW);
            Serial.println("GAS LEAKING");
            SendMessage();
        }
        delay(5000);
    }
    else
    {
        digitalWrite(R_LED, LOW);
        digitalWrite(Buzzer1, LOW);
        digitalWrite(Buzzer2, LOW);
        digitalWrite(G_LED, HIGH);
        Serial.println("NORMAL");
        delay(1000);
    }
}

void SendMessage()
{
    mySerial.println("AT+CMGF=1");
    delay(10); // add delay if needed
    mySerial.println("AT+CMGS=\"09xxxxxxxxx\"\r"); //Designated Number 
    delay(10);
    mySerial.println("GAS LEAKAGE DETECTED. OPEN YOUR WINDOWS NOW!"); //Custom Message
    delay(10);
    mySerial.println((char)26);
    delay(10);
}
