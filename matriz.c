#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void rellenarMatriz(int*, int filas);

int main() {
    int filas, columnas;
    printf("Introduce el numero de filas de la matriz:\n");
    scanf("%d", &filas);
    printf("Introduce el numero de columnas de la matriz:\n");
    scanf("%d", &columnas);
    int** campo = (int**)malloc(filas*sizeof(int*));
    for(int i = 0; i < filas; i++) {
        campo[i] = (int*)malloc(columnas*sizeof(int));
        printf("\n");
        rellenarMatriz(campo[i], columnas);
    }
    printf("\n");
    free(campo);
    return 0;
}

void rellenarMatriz(int* elemento, int columnas) {
    for(int i = 0; i < columnas; i++) {
        elemento[i] = ((int)rand() % 9 + 1);
        printf("\t%d", elemento[i]);
    }
}