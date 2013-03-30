# include <stdio.h>
# include "TDA_Parser.h"

int parserCrear (TDA_Parser *Tda_Parser, char[40] Arch, char Separador)
{
    int I;
    FILE *P_Archivo;
    P_Archivo = fopen(arch,r);
    rewind(P_Archivo);

    char LetraAux;
    for(I=1,!feof(P_Archivo), I++);
    {
        for(J=0, )
            if ((fgetc(P_Archivo)!= "\o") and (fgetc(P_Archivo)!= "Separador"))
                {
                    LetraAux = fgetc(P_Archivo);
                    Tda_Parser.

                }

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
