#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TDA_Parser.h"

// Primitivas

int parserCrear (TDA_Parser *Tda_Parser, char *Archivo, char Separador)
{
    char CadeAux;
    int I;
    FILE *P_Archivo;
    P_Archivo= fopen(Archivo,"r");
    if (P_Archivo)
    {
        rewind(P_Archivo);
        if (!feof(P_Archivo))
            do
            {
                do
                {
                    CadeAux= fgetc(P_Archivo);
                    strcat(Tda_Parser.Nombre, CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(Tda_Parser.Jugada01, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada02, CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada03, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada04, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada05, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada06, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada07, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada08, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada09, *CadeAux);
                }
                while(CadeAux!= Separador);
                do
                {
                    CadeAux = fgetc(P_Archivo);
                    strcat(*Tda_Parser.Jugada10, *CadeAux);
                }
                while(CadeAux!= "\0");
                *Tda_Parser.NumLinea = 1;
                *Tda_Parser.Archivo = P_Archivo;
                *Tda_Parser.Separador = *Separador;
            }
            while (CadeAux!= "\0");
        else
        {
            printf("El Archivo: -> %s"," ESTA VACIO!!!!!!", Archivo);
            return 0;
        }
    }
    else
    {
        printf("El Archivo: -> %s"," NO EXISTE y NO FUE ABIERTO", Archivo);
        return 0;
    }

    return 0;
}

int obtenerSiguienteLinea (TDA_Parser *Tda_Parser,)
{
    do
    {
        do
            CadeAux= fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Nombre, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada01, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada02, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada03, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada04, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada05, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada06, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada07, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada08, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada09, CadeAux);
        while(CadeAux!= Separador);
        do
            CadeAux = fgetc(Tda_Parser.Archivo);
            strcat(Tda_Parser.Jugada10, CadeAux);
        while(CadeAux!= "\0");

        Tda_Parser.NumLinea= Tda_Parser.NumLinea++;
    }
    while ((CadeAux!= "\0") || foef(Tda_Parser.Archivo));
    return 1;
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
    fclose(P_Archivo);
    free(Tda_Parser);
    return 1;
}
