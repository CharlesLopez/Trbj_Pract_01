#ifndef __score_h__
#define __score_h__


typedef struct {
    char nombre[20];
    int jugada[10][3];  // Es un vector de vectores, para cada tiro tiene sus respectivos lugares
    int creado;  //Para verificar si se creo el tda_score
} TDA_Score;

// Primitivas

int s_crear(TDA_Score* score);/*Recibe�un�TDA_Score�y�lo�inicializa�de�manera�correcta�para�su�posterior�uso,�en�caso�de�falla o��xito�devuelve�el�c�digo�correspondiente*/
int s_agregarTiro(TDA_Score* score,char detalle[3], int posicion); /*Recibe�un�TDA_Score�inicializado,�un�detalle�del�tiro�(que�puede�tener�uno�o�dos�o tres caracteres)�y la�posici�n�de�ejecuci�n�(1�a�10),�en�caso�de�falla�o��xito�devuelve�el�c�digo�correspondiente.*/
int s_calcularResultado(TDA_Score score); /*Recibe�un�TDA_Score�inicializado,�y�devuelve�la�puntuaci�n�obtenida,�en�caso�de�falla�devuelve un�c�digo�entero�negativo, con los numeros de linea que tienen la falla.*/
int s_establecerParticipante(TDA_Score* score,char nombreUsuario[20]); /*Recibe�un�TDA_Score�inicializado�y�establece�el�nombre�de�usuario�recibido�por�parametro,�en caso�de�falla�o��xito�devuelve�el�c�digo�correspondiente*/
int s_obtenerParticipante(TDA_Score score,char *nombre[20]) ; /*Recibe�un�TDA_Score�inicializado�y�devuelve�el�nombre�de�usuario en la variable nombre que le pasamos*/
int s_destruir(TDA_Score* score); /*Recibe�un�TDA_Score�inicializado�para�el�cual�se�liberan�los�recursos�utilizados�dejando�al�TDA inutilizable.*/

#endif // __score_h__


