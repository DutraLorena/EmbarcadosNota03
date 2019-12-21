CODIGO DE COMUNICAÇÃO SERIAL MESTRE

#include <Wire.h>

int x;                      // Variável para transmitir

void setup()
{
  
  Wire.begin();              // Configura o barramento I2C
}

void loop()
{
  x = 1;                      // 1 ou 0
  
  Wire.beginTransmission(15); // Transmite para o dispositivo número 15
  Wire.write(x);              // Envia 1 byte
  Wire.endTransmission();     // Para transmissão

  delay(100);
}
