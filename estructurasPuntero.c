#include <stdio.h>
#include <stdlib.h>

#define MAX 30

struct personas {
    char nombre[MAX];
    int edad;
    int peso;
};
typedef struct personas persona;

void mostrarPersona(persona *p);

int main() {
    persona alumnos [] = {{"Jose", 15, 24}, {"Mariano", 23, 90}};
    persona * p; 
    p = alumnos;
    for(int i = 0; i < 2; i++, p++) {
        printf("\nPersona %d:\n", i+1);
        mostrarPersona(p);
    }
    return 0;
}

void mostrarPersona(persona *p) {
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %d\n", p->edad);
    printf("Peso: %d\n", p->peso);
}