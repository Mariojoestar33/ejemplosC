#include <stdio.h>

int maximo(int* arr, int tam);
int minimo(int* arr, int tam);

int main() {
    int arreglo [] = { 0, 1, 2, 3, 4, 5, 121892, 234234, -100};
    printf("El elemento maximo del arreglo es de: %d\n", maximo(arreglo, (int)(sizeof(arreglo)/sizeof(arreglo[0]))));
    printf("El elemento maximo del arreglo es de: %d\n", minimo(arreglo, (int)(sizeof(arreglo)/sizeof(arreglo[0]))));
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

int minimo(int* arr, int tam) {
    int min = *arr;
    for(int i = 0; i < tam; i++) {
        if(*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}