#define BLYNK_PRINT Serial //se debe poner antes de la libreria

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
//#include <Servo.h>
#include <ESP32Servo.h>




Servo servoMotor;

bool counter = 0;
int pin = 21;
char token[] = "zXI3NpVjj9H-YdVdgwHQp4fhdQuY1QBh"; // este token se genera luego de crear la aplicacion en blynk
int centerdata = 95;
int lefdata = 120;
int rigdata = 63;


BLYNK_WRITE(V1) { //lee desde blynk el estado del boton y si se presiona, el servo se mueve. V0 es el que asignaste en blynk
  centerdata = param.asInt();
}

BLYNK_WRITE(V2) { //lee desde blynk el estado del boton y si se presiona, el servo se mueve. V0 es el que asignaste en blynk
  lefdata = param.asInt();
}

BLYNK_WRITE(V3) { //lee desde blynk el estado del boton y si se presiona, el servo se mueve. V0 es el que asignaste en blynk
  rigdata = param.asInt();
}

BLYNK_WRITE(V0) { //lee desde blynk el estado del boton y si se presiona, el servo se mueve. V0 es el que asignaste en blynk
  int V0data = param.asInt(); //.asString .asDouble //volvemos un valor entero el valor que se mandó desde blynk



  servoMotor.write(centerdata);
  delay(200);
  if (V0data)
  {
    if (counter == 1)
    {
      servoMotor.write(rigdata);
      delay(500);
      servoMotor.write(centerdata);
      counter = 0;
    }
    else
    {
      servoMotor.write(lefdata);
      delay(500);
      servoMotor.write(centerdata);
      counter = 1;
    }
  }
}


void setup() {
  Serial.begin(115200);
  Blynk.begin(token, "wifi", "password"); //token de autorizacion e internet
  servoMotor.attach(pin);

}

void loop() {
  Blynk.run(); //si llegó un datro desde blynk
}
