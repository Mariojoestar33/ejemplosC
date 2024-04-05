#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX 2

int main() {
    int totalVocales = 0;
    char ** lineas;
    lineas = (char**)malloc(MAX*sizeof(char*));
    if(lineas == NULL) {
        printf("Error de MALLOC\n");
        return -1;
    }
    for(int i = 0; i < MAX; i++) {
        char BUFFER[100];
        printf("Introduce la cadena:\n");
        fgets(BUFFER, sizeof(BUFFER), stdin);
        lineas[i] = (char*)malloc((strlen(BUFFER + 1)*sizeof(char)));
        strcpy(lineas[i], BUFFER);
    }
    for(int i = 0; i < MAX; i++) {
        totalVocales += contarVocales(lineas[i]);
    }
    printf("Total Vocales: %d\n", totalVocales);
    return 0;
}

int contarVocales(char* cadena) {
    int vocales = 0;
    for(int i = 0; i < strlen(cadena); i++) {
        char upper = toupper(cadena[i]);
        if(upper == 'A' || upper == 'E' || upper == 'I' || upper == 'O' || upper == 'U') {
            vocales++;
        }
    }
    return vocales;
}