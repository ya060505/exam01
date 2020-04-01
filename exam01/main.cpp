#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

      uLCD.printf("\n106061246\n"); //Default Green on black text
      uLCD.filled_rectangle(50, 50, 60, 60, 50);

      wait(30);

}