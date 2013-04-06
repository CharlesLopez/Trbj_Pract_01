# ifndef __TDA_Parser_h__
# define __TDA_Parser_h__
# define MAX_CAR 60

typedef struct {
    char Nombre[20];
    char Jugada01[3];
    char Jugada02[3];
    char Jugada03[3];
    char Jugada04[3];
    char Jugada05[3];
    char Jugada06[3];
    char Jugada07[3];
    char Jugada08[3];
    char Jugada09[3];
    char Jugada10[4];
    int NumLinea;
    char *Archivo;
    char Separador[3];
} TDA_Parser;

// Primitivas.

int parserCrear (TDA_Parser *Tda_Parser, char *Arch, char Separador);

int obtenerSiguienteLinea (TDA_Parser *Tda_Parser);

int obtenerCampo (TDA_Parser Tda_Parser, int N, char *Valor);

int destruir (TDA_Parser *Tda_Parser);

# endif
