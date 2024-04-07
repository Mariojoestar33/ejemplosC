#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char* ptr;
    char cadena[30];
    printf("Introduce la cadena:\n");
    gets(cadena);
    int longitud = strlen(cadena);
    ptr = (char*)malloc((longitud + 1)*sizeof(char));
    strcpy(ptr, cadena);
    printf("\nLa cadena dentro de ptr es: %s\n", ptr);
    free(ptr);
    return 0;
}