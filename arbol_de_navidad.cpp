#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 10; i++) { 				 // Inicia un bucle que se ejecutará 10 veces (corresponde a cada fila del árbol).
        for(j = 0; j < 10 - i; j++) {	     // Este otro bucle se encarga de imprimir espacios en blanco antes de cada línea del árbol.
            printf(" ");
        }
        if (i == 0) {						 // Imprime un asterisco seguido de un salto de línea siempre y cuando se encuentre en la primera fila del árbol.
            printf("*\n");
        } else {
            printf(" ");					 // Imprime un espacio para que de esta manera el asterisco quede centrado en el árbol de navidad.
            for(j = 0; j < 2 * i - 1; j++) { // Imprime la secuencia de números en cada fila del árbol. La cantidad de números depende de en qué fila se encuentre.
                printf("0");				 // Imprime un cero en la pantalla
            }
            printf("\n");					 // Imprimer un salto de línea para pasar a la siguiente fila del árbol.
        }
    }
    return 0;
}

