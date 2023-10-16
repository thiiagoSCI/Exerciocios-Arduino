#include <Servo.h> 
  
int i = 0; 
 
Servo servo_11; 
  
void setup() 
{ 

servo_11.attach(11, 500, 2500); 
} 
void loop() 
{ 

for (i = 0; i <= 90; i += 1) { 
servo_11.write(i); 
delay(15); 
} 

for (i = 0; i <= 90; i += 1) { 
servo_11.write(i); 
delay(30); 
} 
delay(1000); 
 
for (i = 180; i >= 90; i -= 1) { 
servo_11.write(i); 
delay(30); 
} 

for (i = 180; i >= 0; i -= 1) { 
servo_11.write(i); 
delay(15);
}
} 