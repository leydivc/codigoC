#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 10; i++) { 				 // Inicia un bucle que se ejecutar� 10 veces (corresponde a cada fila del �rbol).
        for(j = 0; j < 10 - i; j++) {	     // Este otro bucle se encarga de imprimir espacios en blanco antes de cada l�nea del �rbol.
            printf(" ");
        }
        if (i == 0) {						 // Imprime un asterisco seguido de un salto de l�nea siempre y cuando se encuentre en la primera fila del �rbol.
            printf("*\n");
        } else {
            printf(" ");					 // Imprime un espacio para que de esta manera el asterisco quede centrado en el �rbol de navidad.
            for(j = 0; j < 2 * i - 1; j++) { // Imprime la secuencia de n�meros en cada fila del �rbol. La cantidad de n�meros depende de en qu� fila se encuentre.
                printf("0");				 // Imprime un cero en la pantalla
            }
            printf("\n");					 // Imprimer un salto de l�nea para pasar a la siguiente fila del �rbol.
        }
    }
    return 0;
}

