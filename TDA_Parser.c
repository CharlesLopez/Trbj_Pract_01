#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TDA_Parser.h"

// Implementacion de Primitivas

int parserCrear (TDA_Parser *Tda_Parser, char *Archivo, char Separador)
{
    int I, Contador;
    FILE *P_Archivo;
    P_Archivo = fopen(Archivo,"r");
    if (P_Archivo)
    {
        rewind(P_Archivo);
        if (!EOF)
        {
            Contador= 1;
            do
            {
                if (Contador == 1)
                    For (I= 0, I< 20, I++)
                        (*Tda_Parser).Nombre[I]= '\0';
                if (Contador == 2)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada01[I]= '\0';
                if (Contador == 3)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada02[I]= '\0';
                if (Contador == 4)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada03[I]= '\0';
                if (Contador == 5)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada04[I]= '\0';
                if (Contador == 6)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada05[I]= '\0';
                if (Contador == 7)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada06[I]= '\0';
                if (Contador == 8)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada07[I]= '\0';
                if (Contador == 9)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada08[I]= '\0';
                if (Contador == 10)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada09[I]= '\0';
                if (Contador == 11)
                    For (I= 0, I< 2, I++)
                        (*Tda_Parser).Jugada10[I]= '\0';
                ++Contador;                
            }
            while (Contador < 12);
            (*Tda_Parser).NumLinea = 0;
            (*Tda_Parser).Archivo = P_Archivo;
            (*Tda_Parser).Separador = Separador;
        }
        else
        {
            printf("El Archivo: -> %s"," ESTA VACIO!!!!!!\n", Archivo);
            return 0;
        }
    }
    else
    {
        printf("El Archivo: -> %s"," NO EXISTE y NO FUE ABIERTO\n", Archivo);
        return 0;
    }
    return 0;
}


int obtenerSiguienteLinea (TDA_Parser *Tda_Parser)
{
    char CadeAux[20];
    int Contador, I;
    if ((*Tda_Parser).NumLinea >= 0)
    {
        do
        {
            Contador += 1;
            do
            {
                CadeAux[I] = fgetc((*Tda_Parser).Archivo);
                I ++;
            }
            while((CadeAux[I-1] != (*Tda_Parser).Separador) && (CadeAux[I-1] != '\n'));
            if (Contador == 1)
                strcat((*Tda_Parser).Nombre, CadeAux);
            if (Contador == 2)
                strcat((*Tda_Parser).Jugada01, CadeAux);
            if (Contador == 3)
                strcat((*Tda_Parser).Jugada02, CadeAux);
            if (Contador == 4)
                strcat((*Tda_Parser).Jugada03, CadeAux);
            if (Contador == 5)
                strcat((*Tda_Parser).Jugada04, CadeAux);
            if (Contador == 6)
                strcat((*Tda_Parser).Jugada05, CadeAux);
            if (Contador == 7)
                strcat((*Tda_Parser).Jugada06, CadeAux);
            if (Contador == 8)
                strcat((*Tda_Parser).Jugada07, CadeAux);
            if (Contador == 9)
                strcat((*Tda_Parser).Jugada08, CadeAux);
            if (Contador == 10)
                strcat((*Tda_Parser).Jugada09, CadeAux);
            if (Contador == 11)
                strcat((*Tda_Parser).Jugada10, CadeAux);
        }
        while (CadeAux[I-1] != '\n');
        (*Tda_Parser).NumLinea += 1;
        return 1;
    }
    else
        return 0;
}

int obtenerCampo (TDA_Parser Tda_Parser, int N, char *Valor)
// N es un numero entre 1 y 11 inclusive.
// 1 para el nombre y 11 para el decimo digito.
{
    if ((((1 <= N) && (N >= 11)) && (Valor)) && (Tda_Parser.NumLinea))
    {
        if (N == 1)
            Valor = Tda_Parser.Nombre;
        if (N == 2)
            Valor = Tda_Parser.Jugada01;
        if (N == 3)
            Valor = Tda_Parser.Jugada02;
        if (N == 4)
            Valor = Tda_Parser.Jugada03;
        if (N == 5)
            Valor = Tda_Parser.Jugada04;
        if (N == 6)
            Valor = Tda_Parser.Jugada05;
        if (N == 7)
            Valor = Tda_Parser.Jugada06;
        if (N == 8)
            Valor = Tda_Parser.Jugada07;
        if (N == 9)
            Valor = Tda_Parser.Jugada08;
        if (N == 10)
            Valor = Tda_Parser.Jugada03;
        if (N == 11)
            Valor = Tda_Parser.Jugada10;
        return 1;
    }
    else
        return 0;
}

int destruir (TDA_Parser *Tda_Parser)
{
    fclose((*Tda_Parser).Archivo);
    free(Tda_Parser);
    return 1;
}
