#include <stdio.h>
#include <stdlib.h>
#include "TDA_Score.h"


// Valores de retorno: Falla=0 ; Exito>0


int crear(TDA_Score *score) {
    score.nombre="";
    int i;
    for (i=0;i<11;i++) {
            score.jugada[i][0]=0;
            score.jugada[i][1]=0;
            score.jugada[i][2]=0;
    }
    return 1;
}


int AgregarTiro(TDA_Score *score,char detalle[4],int posicion) {
    int i;
    for (i=0,i<4,i++){
        switch (detalle[i]){
            case '1': score.jugada[posicion][i]=1; break;
            case '2': score.jugada[posicion][i]=2; break;
            case '3': score.jugada[posicion][i]=3; break;
            case '4': score.jugada[posicion][i]=4; break;
            case '5': score.jugada[posicion][i]=5; break;
            case '6': score.jugada[posicion][i]=6; break;
            case '7': score.jugada[posicion][i]=7; break;
            case '8': score.jugada[posicion][i]=8; break;
            case '9': score.jugada[posicion][i]=9; break;
            case 'x': score.jugada[posicion][i]=-1; break;      // Las x las transformo en -1 y las barras en -2
            case '/': score.jugada[posicion][i]=-2; break;
        }
    }
    return 1;
}

long calcularResultado(TDA_Score score){
    int i,j,h,k,puntos[11];
    long total;

    for (k=1;k<11;k++){
            puntos[k]=0;
    }

    for(i=1;i<10;i++){
        if(score.jugada[i][0]==-1){
                puntos[i]=10;
                if(score.jugada[i-1][0]==-1){
                        puntos[i-1]=puntos[i-1]+10;
                        if (i>2){
                            if(score.jugada[i-2][0]==-1){
                                puntos[i-2]=puntos[i-2]+10;
                            }
                        }
                }
                if(score.jugada[i-1][1]==-2){
                        puntos[i-1]=puntos[i-1]+10;
                }
        }

        if(score.jugada[i][1]==-2){
                puntos[i]=10;
        }else{
            puntos[i]=score.jugada[i][0]+score.jugada[i][1];
            if(score.jugada[i-1][0]==-1){
                puntos[i-1]=puntos[i-1]+puntos[i];
            }
            if(score.jugada[i-1][1]==-2){
                puntos[i-1]=puntos[i-1]+score.jugada[i][0];
            }
        }
    }

    for(j=0;j<4;j++){
        switch (score.jugada[j]){
            case -1: score.jugada[10][j]=10; break;
            case -2: score.jugada[10][j]=10; break;
        }
        puntos[10]=puntos[10]+score.jugada[10][j];
    }

    total=0;
    for (h=1;h<11;h++){
        total=total+puntos[h];
    }
    return total;
}

int establecerParticipante(TDA_Score *score,char nombreUsuario[20]) {
    score.nombre=nombreUsuario;                  /*Inserta dentro del tdascore el nombre de usuario que recibio, supuestamente desde el parser*/
    return 1;
}

char obtenerParticipante[20](TDA_Score score) {
    return score.Nombre;                    /* Devuelve el nombre del jugador, almacenado en el tda_Score*/
}

int destruir(TDA_Score *score){
    free(score);
    return 1;
}
