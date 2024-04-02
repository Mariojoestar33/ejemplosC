#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

int conversionRomano(char r);

int main() {
    char numero[MAX];
    printf("***Conversion de numeros romanos***\n");
    printf("Introduzca un numero romano:\n");
    scanf("%s", numero);
    int suma = 0;
    for(int i = 0; i < strlen(numero); i++) {
        suma = suma + conversionRomano(numero[i]);
    }
    printf("\nEl numero es: %d\n", suma);
}

int conversionRomano(char r) {
    switch(r) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}