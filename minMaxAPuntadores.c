#include <stdio.h>

int maximo(int* arr, int tam);

int main() {
    int arreglo [] = { 0, 1, 2, 3, 4, 5, 121892, 234234};
    printf("El elemento maximo del arreglo es de: %d\n", maximo(arreglo, (int)(sizeof(arreglo)/sizeof(arreglo[0]))));

    return 0;
}

int maximo(int* arr, int tam) {
    int maximmo = *arr;
    for(int i = 0; i < tam; i++) {
        if(*(arr + i) > maximmo) {
            maximmo = *(arr + i);
        }
    }
    return maximmo;
}