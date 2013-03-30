# include <stdio.h>
# include "TDA_Parser.h"

int parserCrear (TDA_Parser *tda_parser, char[40] arch, char separador)
{
    int Valor;
    int I;
    FILE *P_Archivo;
    P_Archivo = fopen(arch,r);
    rewind(P_Archivo);

    for(I=1,!feof(P_Archivo), I++);
    {

    }


}

int obtenerSiguienteLinea (TDA_Parser *tda_parser,)
{

}

int obtenerCampo (TDA_Parser tda_parser, int N, char *Valor)
{

}

int destruir (TDA_Parser *tda_parser)
{

}
