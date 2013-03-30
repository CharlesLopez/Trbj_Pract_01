# ifndef __TDA_Parser_h__
# define __TDA_Parser_h__
# define MAX_CAR 60

typedef struct {
    char    Nombre[20]= "Nombre Vacio";
    char    Jugada01[2];
    char    Jugada02[2];
    char    Jugada03[2];
    char    Jugada04[2];
    char    Jugada05[2];
    char    Jugada06[2];
    char    Jugada07[2];
    char    Jugada09[2];
    char    Jugada10[3];
    int     NumLinea = 0;
} TDA_Parser;

// Primitivas.

int parserCrear (TDA_Parser *tda_parser, char[40] arch, char separador);
int obtenerSiguienteLinea (TDA_Parser *tda_parser,);
int obtenerCampo (TDA_Parser tda_parser, int N, char *Valor);
int destruir (TDA_Parser *tda_parser);

# endif
