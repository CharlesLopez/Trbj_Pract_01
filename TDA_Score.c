# Include <stdio.h>
# Include "TDA_Score.h"

// Valores de retorno: Falla=0 ; Exito=1


int crear(TDA_Score* score) {
    score.nombre="";
    for (int i=1;i<10;i++) {
            score.jugada.i[0]="";
            score.jugada.i[1]="";
            score.jugada.i[2]="";
    }
    score.jugada.10[0]="";
    score.jugada.10[1]="";
    score.jugada.10[2]="";
    score.jugada.10[3]="";

    return 1;
}


int AgregarTiro(TDA_Score* score, char detalle[3], int posicion) {

}

int calcularResultado(TDA_Score score){

}

int establecerParticipante(TDA_Score* score, char nombreUsuario[20]) {
    TDA_Score.nombre=nombreUsuario;
    return 1;
}

char obtenerParticipante[20](TDA_Score score) {
    return TDA_Score.Nombre;                    /* Devuelve el nombre del jugador, almacenado en el tda_Score*/
}

void destruir(TDA_Score* score){
    free(Score);
    return 1;
}
