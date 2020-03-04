//*************************************************************************************************/
//   Projeto    : 01-Digital_Output
//   Arquivo    : Druida.ino
//   Descrição  : Druida Structures
//   Data       : 04/03/2020
//*************************************************************************************************/

#include "BqBusCmd.h"

#define numRegs 10 //Quantidade de registradores compartilhados com a interface do Druida

BqBusCmd Druida(numRegs);   //Inicializa o objeto Druida, respons?vel pela comunica??o com a interface

void inicializaDruida()
{
    Druida.begin(115200);     //Inicializa a porta de comunica??o com a interface a 9600
}

void comunicacaoDruida()
{
    Druida.updateRegs();   //Atualiza os registradores compartilhados com a interface
    Pin_13_Leitura();       //Leitura de componente: Digital_Output\Pin 13
}
