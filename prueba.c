#include <stdlib.h>
#include <stdio.h>

struct alumnos
{
    char nombre [50];
    int nota;
};

typedef struct alumnos alumno;

void rellenarDatos(alumno* al, int numAl);
void desplegarDatos(alumno* al, int numAl);


int main() {
    
    int i;

    printf("Introduce cuantos alumnos hay:\n");
    scanf("%d", &i);

    alumno* al = (alumno*)malloc(i*sizeof(alumno));

    rellenarDatos(al, i);

    desplegarDatos(al, i);

    return 0;
}

void rellenarDatos(alumno* al, int numAl) {
    for(int i = 0; i < numAl; i++) {
        printf("Ingresa el nombre del alumno %d: \n", i+1);
        scanf("%s", &al[i].nombre);
        printf("Ingresa la calificacion del alumno:\n");
        scanf("%d", &al[i].nota);
    }
}

void desplegarDatos(alumno* al, int numAl) {
    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < numAl; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", al[i].nombre);
        printf("Calificacion: %d\n", al[i].nota);
    }
}