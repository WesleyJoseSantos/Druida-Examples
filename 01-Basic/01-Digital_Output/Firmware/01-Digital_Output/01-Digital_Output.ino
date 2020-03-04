//*************************************************************************************************/
//   Projeto    : 01-Digital_Output
//   Arquivo    : 01-Digital_Output.ino
//   Descrição  : Configurações e loop principal
//   Data       : 04/03/2020
//*************************************************************************************************/

#include "pins.h"

void setup()
{
    // configurações:
    inicializaDruida();
    pinMode(PIN_LED, OUTPUT);
}

void loop() 
{
    // loop principal:
    comunicacaoDruida();
}