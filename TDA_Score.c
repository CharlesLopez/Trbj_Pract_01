#include <stdio.h>
#include "TDA_Score.h"


// Valores de retorno: Falla=0 ; Exito=1


int crear(TDA_Score *score) {
    score.nombre="";
    int i;
    for (i=1;i<11;i++) {
            score.jugada[i][0]='';
            score.jugada[i][1]='';
            score.jugada[i][2]='';
            score.jugada[i][3]='';
    }
    return 1;
}


int AgregarTiro(TDA_Score *score,char detalle[4],int posicion) {
    score.jugada[posicion][0]=detalle[0];
    score.jugada[posicion][1]=detalle[1];
    score.jugada[posicion][2]=detalle[2];
    score.jugada[posicion][3]=detalle[3];
    return 1;
}

int calcularResultado(TDA_Score score){
    int aux1,cont,i,j;
    for(i=1;i<11;i++){
        for(j=1;i<4;i++){
            switch (score.jugada[i][j]){
                case '1': aux1=1;cont=cont+aux1;
                case '2': aux1=2;cont=cont+aux1;
                case '3': aux1=3;cont=cont+aux1;
                case '4': aux1=4;cont=cont+aux1;
                case '5': aux1=5;cont=cont+aux1;
                case '6': aux1=6;cont=cont+aux1;
                case '7': aux1=7;cont=cont+aux1;
                case '8': aux1=8;cont=cont+aux1;
                case '9': aux1=9;cont=cont+aux1;
            }
        }
    }
    return cont;
}

int establecerParticipante(TDA_Score *score,char nombreUsuario[20]) {
    TDA_Score.nombre=nombreUsuario;                  /*Inserta dentro del tdascore el nombre de usuario que recibio, supuestamente desde el parser*/
    return 1;
}

char obtenerParticipante[20](TDA_Score score) {
    return TDA_Score.Nombre;                    /* Devuelve el nombre del jugador, almacenado en el tda_Score*/
}

int destruir(TDA_Score *score){
    score->nombre="";
    int i;
    for (i=1;i<11;i++) {
            score.jugada[i][0]='';
            score.jugada[i][1]='';
            score.jugada[i][2]='';
            score.jugada[i][3]='';
    }
    return 1;

}
