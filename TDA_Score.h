#ifndef __score_h__
#define __score_h__


typedef struct {
    char nombre[20];
    int jugada[12][4];  // Es un vector de vectores, para cada tiro tiene sus respectivos lugares
} TDA_Score;

// Primitivas

int crear(TDA_Score* score);/*Recibe un TDA_Score y lo inicializa de manera correcta para su posterior uso, en caso de falla o éxito devuelve el código correspondiente*/
int agregarTiro(TDA_Score* score,char detalle[4], int posicion); /*Recibe un TDA_Score inicializado, un detalle del tiro (que puede tener uno o dos o tres caracteres) y la posición de ejecución (1 a 10), en caso de falla o éxito devuelve el código correspondiente.*/
long calcularResultado(TDA_Score score); /*Recibe un TDA_Score inicializado, y devuelve la puntuación obtenida, en caso de falla devuelve un código entero negativo, con los numeros de linea que tienen la falla.*/
int establecerParticipante(TDA_Score* score,char nombreUsuario[20]); /*Recibe un TDA_Score inicializado y establece el nombre de usuario recibido por parametro, en caso de falla o éxito devuelve el código correspondiente*/
char obtenerParticipante(TDA_Score score); /*Recibe un TDA_Score inicializado y devuelve el nombre de usuario */
int destruir(TDA_Score* score); /*Recibe un TDA_Score inicializado para el cual se liberan los recursos utilizados dejando al TDA inutilizable.*/

#endif // __score_h__


