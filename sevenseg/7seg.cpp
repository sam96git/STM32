// Code by GVV Sharma
// Author-Shyam Anand
// December 24, 2024
// released under GNU GPL

#include<Arduino.h>
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(PB3, a); 
  digitalWrite(PB4, b); 
  digitalWrite(PB5, c); 
  digitalWrite(PB6, d); 
  digitalWrite(PB7, e); 
  digitalWrite(PB8, f);     
  digitalWrite(PB9, g); 
}
void setup() 
{
    pinMode(PB3, OUTPUT);  
    pinMode(PB4, OUTPUT);
    pinMode(PB5, OUTPUT);
    pinMode(PB6, OUTPUT);
    pinMode(PB7, OUTPUT);
    pinMode(PB8, OUTPUT);
    pinMode(PB9, OUTPUT);            
}
void loop() 
{
sevenseg(0,0,0,0,0,0,1);  
}
