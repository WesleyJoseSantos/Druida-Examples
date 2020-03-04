//*************************************************************************************************/
//   Projeto    : 01-Digital_Output
//   Arquivo    : Tela_Digital_Output.ino
//   Descrição  : Rotinas relacionadas aos comandos da Tela: Digital_Output
//   Data       : 04/03/2020
//*************************************************************************************************/

#include "pins.h"

void Pin_13_Leitura()
{
    bool Pin_13 = Druida.getRegBit(0,0);
    digitalWrite(PIN_LED, Pin_13);
}
