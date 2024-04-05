#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void rellenarMatriz(int*, int m);

int main() {
    int m, n;
    printf("Introduce el numero de columnas de la matriz:\n");
    scanf("%d", &m);
    printf("Introduce el numero de filas de la matriz:\n");
    scanf("%d", &n);
    int** campo = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++) {
        campo[i] = (int*)malloc(n*sizeof(int));
        printf("\n");
        rellenarMatriz(campo[i], n);
    }
    printf("\n");
    free(campo);
    return 0;
}

void rellenarMatriz(int* elemento, int j) {
    for(int i = 0; i < j; i++) {
        elemento[i] = ((int)rand() % 9 + 1);
        printf("\t%d", elemento[i]);
    }
}