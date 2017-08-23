
#include "ultra.h"

ultra dist(14,12); //echo, trigger

void setup() {

}

void loop() {

int x = dist.medir();

Serial.print("Distancia: ");
Serial.print(x); Serial.println(" cm");

delay(1000);
}
