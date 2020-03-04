//*************************************************************************************************/
//   Projeto    : 01-Digital_Output
//   Arquivo    : 01-Digital_Output.ino
//   Descri��o  : Configura��es e loop principal
//   Data       : 04/03/2020
//*************************************************************************************************/

#include "pins.h"

void setup()
{
    // configura��es:
    inicializaDruida();
    pinMode(PIN_LED, OUTPUT);
}

void loop() 
{
    // loop principal:
    comunicacaoDruida();
}