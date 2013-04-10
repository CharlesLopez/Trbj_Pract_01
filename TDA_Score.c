#include <stdio.h>
#include <string.h>
#include "TDA_Score.h"


// Valores de retorno: Falla=0 ; Exito>0


int s_crear(TDA_Score *score) {
    strcpy(score->nombre,"");
    int i;
    for (i=0;i<11;i++) {
            score->jugada[i][0]=0;
            score->jugada[i][1]=0;
            score->jugada[i][2]=0;
    }
    score->creado=1;  //Asigno el 1 para saber que se creo el tda_score
    return 1;
}


int s_AgregarTiro(TDA_Score *score,char detalle[3],int posicion) {
    if(score->creado==1){
        int i;
        for (i=0;i<3;i++){
            switch (detalle[i]){
                case '1': score->jugada[posicion][i]=1; break;
                case '2': score->jugada[posicion][i]=2; break;
                case '3': score->jugada[posicion][i]=3; break;
                case '4': score->jugada[posicion][i]=4; break;
                case '5': score->jugada[posicion][i]=5; break;
                case '6': score->jugada[posicion][i]=6; break;
                case '7': score->jugada[posicion][i]=7; break;
                case '8': score->jugada[posicion][i]=8; break;
                case '9': score->jugada[posicion][i]=9; break;
                case 'x': score->jugada[posicion][i]=-1; break;      // Las x las transformo en -1 y las barras en -2
                case '/': score->jugada[posicion][i]=-2; break;
            }
        }
    return 1;
    } else return 0;
}

int s_calcularResultado(TDA_Score score){
    if(score.creado==1){
        int i,j,h,k,puntos[10];
        int total;

        for (k=0;k<10;k++){
            puntos[k]=0;
        }

        for(i=1;i<10;i++){
            if ((score.jugada[i][0]+score.jugada[i][1])>9)return (-i);
            if ((score.jugada[i][0]==-1)&&(score.jugada[i][1]==-1))return (-i);      //Si encuentra un error, devuelve la linea donde encontro el error
            if ((score.jugada[i][0]==-2)&&(score.jugada[i][1]==-2))return (-i);

            if(score.jugada[i][0]==-1){
                    puntos[i]=10;
                    if (i>1){
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
            }

            if(score.jugada[i][1]==-2){
                    puntos[i]=10;
            }else{
                puntos[i]=score.jugada[i][0]+score.jugada[i][1];
                if (i>1){
                    if(score.jugada[i-1][0]==-1){
                        puntos[i-1]=puntos[i-1]+puntos[i];
                    }
                    if(score.jugada[i-1][1]==-2){
                        puntos[i-1]=puntos[i-1]+score.jugada[i][0];
                    }
                }
            }
        }
        for(j=0;j<3;j++){
            if (score.jugada[9][j]=-1) score.jugada[9][j]=10;
            if (score.jugada[9][j]=-2) score.jugada[9][j]=10;
            puntos[10]=puntos[10]+score.jugada[10][j];
        }

        total=0;
        for (h=0;h<10;h++){
            total=total+puntos[h];
        }
        return total;
    } else return 0;
}

int s_establecerParticipante(TDA_Score *score,char nombreUsuario[20]) {
    if (score->creado==1){
        strcpy(score->nombre,nombreUsuario);                  //Inserta dentro del tdascore el nombre de usuario que recibio, supuestamente desde el parser
        return 1;
    } else return 0;
}

int s_obtenerParticipante(TDA_Score score,char *nombre[20]) {
    if (score.creado==1){
        strcpy(score.nombre,*nombre);
        return 1;   // Devuelve el nombre del jugador, almacenado en el tda_Score
    }else return 0;
}

int s_destruir(TDA_Score *score){
    score->creado=0; //Le asigno 0 y lo dejo inutilizable
    return 1;
}
