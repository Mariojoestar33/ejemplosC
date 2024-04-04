#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cadena[121];
    char* puntero;
    printf("Introduce una cadena de caracteres:\n");
    gets(cadena);
    puntero = (char*)malloc((strlen(cadena))*sizeof(char));
    strcpy(puntero, cadena);
    printf("Cadena original: %s\n", cadena);
    printf("Cadena con puntero: %s\n", puntero);
    free(puntero);
    return 0;
}
