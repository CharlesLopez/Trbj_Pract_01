# ifndef __TDA_Estructuras_h__
# define __TDA_Estructuras_h__
# define MAX_JUG 20

typedef struct {
    char    Nombre[20]= "";
    char    Jugada01[3];
    char    Jugada02[3];
    char    Jugada03[3];
    char    Jugada04[3];
    char    Jugada05[3];
    char    Jugada06[3];
    char    Jugada07[3];
    char    Jugada09[3];
    char    Jugada10[4];
    int     NumLinea = 0;
} Jugada;

typedef struct {
    Jugada Tda_Parser[MAX_JUG];
} TDA_Parser;

# endif
