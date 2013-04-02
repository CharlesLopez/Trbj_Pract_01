#include <stdio.h>
#include "TDA_Score.h"


// Valores de retorno: Falla=0 ; Exito=1


int crear(TDA_Score* score) {
    score.nombre="";
    for (int i=1;i<11;i++) {
            score.jugada[i][0]='';
            score.jugada[i][1]='';
            score.jugada[i][2]='';
            score.jugada[i][3]='';
    }
    return 1;
}


int AgregarTiro(TDA_Score* score,char detalle[4],int posicion) {
    score.jugada[posicion][0]=detalle[0];
    score.jugada[posicion][1]=detalle[1];
    score.jugada[posicion][2]=detalle[2];
    score.jugada[posicion][3]=detalle[3];
    return 1;
}

int calcularResultado(TDA_Score score){
    for(int i=1;i<11;i++){

        }
}

int establecerParticipante(TDA_Score* score,char nombreUsuario[20]) {
    TDA_Score.nombre=nombreUsuario;                  /*Inserta dentro del tdascore el nombre de usuario que recibio, supuestamente desde el parser*/
    return 1;
}

char obtenerParticipante[20](TDA_Score score) {
    return TDA_Score.Nombre;                    /* Devuelve el nombre del jugador, almacenado en el tda_Score*/
}

int destruir(TDA_Score* score){
    free(score);                              /* Libera la memoria usada por el score*/
    return 1;
}
