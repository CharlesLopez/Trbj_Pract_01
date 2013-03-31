# ifndef __TDA_Parser_h__
# define __TDA_Parser_h__
# define MAX_CAR 60

// Primitivas.

int parserCrear (TDA_Parser *Tda_Parser, char[40] Arch, char Separador);
int obtenerSiguienteLinea (TDA_Parser *Tda_Parser,);
int obtenerCampo (TDA_Parser Tda_Parser, int N, char *Valor);
int destruir (TDA_Parser *Tda_Parser);

# endif
