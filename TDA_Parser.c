#include <stdio.h>
#include "TDA_Parser.h"

int ContLinea= 1 ; // necesario para obtenerSiguienteLinea.

// Primitivas

int parserCrear (TDA_Parser *Tda_Parser, char[40] Archivo, char Separador)
{
    char CadeAux;
    int I;
    FILE *P_Archivo;

    P_Archivo= fopen(Archivo,r);

    if (!P_Archivo)
    {
        printf("El Archivo: -> %s"," NO EXISTE y NO FUE ABIERTO", Archivo);
        return 0;
    }
    else
        rewind(P_Archivo);

    if (feof(P_Archivo))
    {
        printf("El Archivo: -> %s"," ESTA VACIO!!!!!!", Archivo);
        return 0;
    }

    else // si NO entra acá será por algun error ...
    {
      for(I= 1, feof(P_Archivo), I++) //Proceso de Inicializacion del Tda_Parser.
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
      if (!fclose(P_Archivo))   // Si el Tda_Parser es inicializado Correctamente Se cierra Archivo
        return 1;               // Entonces todo esta OK.
      else
      {
          printf("Error al Cerrar el Archivo: %s",Archivo);
          return 0;
      }
    }
    return 0; // ... entonces retorna 0.
}

int obtenerSiguienteLinea (TDA_Parser *Tda_Parser,)
{
    int Aux;
    if (ContLinea < MAX_JUG)
    {
        Aux= Tda_Parser[ContLinea--].NumLinea;
        ContLinea++;
        return Aux;
    }
    else
        return 0; //si se termina el Parser o hay algun error en el procesamiento.
}

int obtenerCampo (TDA_Parser Tda_Parser, int N, char *Valor)
{
    if ((0<= N) and (N>= MAX_JUG) and (Valor) and (Tda_Parser))
    {
        Valor= Valor + Tda_Parser[ContLinea--2];
        return Valor;
    }
    else
    {
        if ((0> N) and (N> MAX_JUG))
            printf("Parametro \"N\" Fuera de Rango.");
        if (!Valor)
            printf("Parametro \"Valor\" Invalido.");
        if (!Tda_Parser)
            printf("Primer Parametro Invalido.");
        return 0;
    }
}

int destruir (TDA_Parser *Tda_Parser)
{
    free(Tda_Parser);
    return 1;
}
