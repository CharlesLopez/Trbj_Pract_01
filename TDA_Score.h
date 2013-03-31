# ifndef __score_h__
# define __score_h__


typedef struct {
    char Nombre[20];
    struct {
          char 1[2];
          char 2[2];
          char 3[2];
          char 4[2];
          char 5[2];
          char 6[2];
          char 7[2];
          char 8[2];
          char 9[2];
          char 10[3];
     } Jugada;
} TDA_Score;

// Primitivas

int crear(TDA_Score*�score) /*Recibe�un�TDA_Score�y�lo�inicializa�de�manera�correcta�para�su�posterior�uso,�en�caso�de�falla o��xito�devuelve�el�c�digo�correspondiente*/
int AgregarTiro(TDA_Score*�score,�char[3]�detalle,�int�posicion) /*Recibe�un�TDA_Score�inicializado,�un�detalle�del�tiro�(que�puede�tener�uno�o�dos�o tres caracteres)�y la�posici�n�de�ejecuci�n�(1�a�10),�en�caso�de�falla�o��xito�devuelve�el�c�digo�correspondiente.*/
int calcularResultado(TDA_Score�score) /*Recibe�un�TDA_Score�inicializado,�y�devuelve�la�puntuaci�n�obtenida,�en�caso�de�falla�devuelve un�c�digo�entero�negativo.*/
int establecerParticipante(TDA_Score*�score,�char[20]�nombreUsuario) /*Recibe�un�TDA_Score�inicializado�y�establece�el�nombre�de�usuario�recibido�por�parametro,�en caso�de�falla�o��xito�devuelve�el�c�digo�correspondiente*/
char[20]�obtenerParticipante(TDA_Score�score) /*Recibe�un�TDA_Score�inicializado�y�devuelve�el�nombre�de�usuario */
void destruir(TDA_Score*�score) /*Recibe�un�TDA_Score�inicializado�para�el�cual�se�liberan�los�recursos�utilizados�dejando�al�TDA inutilizable.*/

#endif // __score_h__