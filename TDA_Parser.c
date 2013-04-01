#include <stdio.h>
#include "TDA_Parser.h"
int ContLinea;

int parserCrear (TDA_Parser *Tda_Parser, char[40] Arch, char Separador)
{
    char CadeAux;
    int I;
    FILE *P_Archivo;

    P_Archivo = fopen(Arch,r);

    if (!P_Archivo)
    {
        printf("El Archivo: -> %s"," NO EXISTE y NO FUE ABIERTO", Arch);
        return 0;
    }
    else
        rewind(P_Archivo);

    if (feof(P_Archivo))
    {
        printf("El Archivo: -> %s"," ESTA VACIO!!!!!!", Arch);
        return 0;
    }

    else
    {
      for(I= 1, feof(P_Archivo), I++)
      {
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Nombre= Tda_Parser[I-1].Nombre + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada01= Tda_Parser[I-1].Jugada01 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada02= Tda_Parser[I-1].Jugada02 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada03= Tda_Parser[I-1].Jugada03 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada04= Tda_Parser[I-1].Jugada04 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada05= Tda_Parser[I-1].Jugada05 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada06= Tda_Parser[I-1].Jugada06 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada07= Tda_Parser[I-1].Jugada07 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada08= Tda_Parser[I-1].Jugada08 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada09= Tda_Parser[I-1].Jugada09 + CadeAux;
          do
            CadeAux = fgetc(P_Archivo);
          while(CadeAux!= Separador);
          Tda_Parser[I-1].Jugada10= Tda_Parser[I-1].Jugada10 + CadeAux;
          Tda_Parser[I-1].NumLinea= I;
    }
      return 1;
    }
}

int obtenerSiguienteLinea (TDA_Parser *Tda_Parser,)
{
    if (ContLinea< MAX_JUG)
        {
            ContLinea+= 1;
            return ContLinea;
        }
    else
        return 0;
}

int obtenerCampo (TDA_Parser Tda_Parser, int N, char *Valor)
{

}

int destruir (TDA_Parser *Tda_Parser)
{

}
