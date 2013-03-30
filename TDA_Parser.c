# include <stdio.h>
# include "TDA_Parser.h"

int parserCrear (TDA_Parser *Tda_Parser, char[40] Arch, char Separador)
{
    int I;
    FILE *P_Archivo;
    P_Archivo = fopen(arch,r);
    rewind(P_Archivo);

    for(I=1,!feof(P_Archivo), I++);
    {
        if ((fgetc(P_Archivo)!= "\o") and (fgetc(P_Archivo)!= "Separador"))


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
