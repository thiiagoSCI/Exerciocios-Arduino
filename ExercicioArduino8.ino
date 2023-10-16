// C++ code
//

#include <Servo.h>
int estadoBotao = 0;

int guardaEstado = 0;


Servo servo_11;

void setup()
{
pinMode(12, INPUT);
servo_11.attach(11, 500, 2500);
}

void loop()

{

estadoBotao = digitalRead(12);
if (estadoBotao == HIGH) {
if (guardaEstado == HIGH) {
guardaEstado = LOW;
} else {
guardaEstado = HIGH;
}
}

if (guardaEstado == HIGH) {

servo_11.write(180);
} else {

servo_11.write(0);
}
delay(25);
}