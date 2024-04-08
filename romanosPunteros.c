#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int romano(char*);

int main() {
    char BUFFER[121];
    int suma = 0;
    printf("Introudce una cadena:\n");
    gets(BUFFER);
    char* puntero = (char*)malloc((strlen(BUFFER) + 1) * sizeof(char));
    strcpy(puntero, BUFFER);
    for(int i = 0; i < strlen(BUFFER); i++, puntero++) {
        int numero = romano(puntero);
        if(numero != -1) {
        suma += numero;
        } else {
            printf("Error: invalid");
            return -1;
        }
    }
    printf("\nEl numero en formato decimal es: %d\n", suma);
    return 0;
}

int romano(char* ptr) {
    char up = toupper(*ptr);
    switch(up) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return -1;
    }
}