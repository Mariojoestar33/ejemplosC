#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char arreglo [MAX];
    char* p;
    printf("***Convertidor de Mayusculas a minusculas de una cadena\n");
    printf("Introduce una cadena:\n");
    gets(arreglo);
    p = arreglo;
    while(*p != '\0') {
        if((*p >= 'a') && (*p <= 'z')) {
            *p++ = *p-32;
        } else {
            p++;
        }
    }
    printf("La cadena corregida es: \n");
    puts(arreglo);
    return 0;
}