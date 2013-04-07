#include <stdio.h>
#include "TDA_Parser.h"
#include "TDA_Score.h"

/* aqui los demas Includes */

main(int argc, char *argv[])
{
    char Archivo[9]= "Datos.txt"; // dsps hay que borrar [9]= "Datos.txt"
    TDA_Parser *Parser;
    TDA_Score Score;
    int ParserOK;


// dsps cambia por    Archivo = *argv[0];

    ParserOK = parserCrear(Parser, Archivo, '|');
    printf ((*Parser).Nombre);

}
