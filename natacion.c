#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define ALUMNOS 2

//Estructura
struct s_nadador {
    char nombre[50];
    int edad;
    char prueba[50];
    float tiempo;
};

typedef struct s_nadador nadador;

//Prototipos
void rellenarDatos(nadador*, int i);
double desviacion(nadador*);

//Funcion main
int main(int argc, char const *argv[])
{
    double desviacionTipica;
    nadador* ptr = (nadador*)malloc(ALUMNOS*sizeof(nadador));
    nadador* primero = ptr;
    for(int i = 1; i <= ALUMNOS; i++, ptr++) {
        rellenarDatos(ptr, i);
    }
    desviacionTipica = desviacion(primero);
    free(primero);
    printf("\nLa desviacion tipica es: %lf\n", desviacionTipica);
    return 0;
}

//Funcion usada para rellenar datos
void rellenarDatos(nadador* nadador, int i) {
    printf("Introduce el nombre de %d:\n", i);
    scanf("%s", &nadador->nombre);
    printf("Introduce el edad de %d:\n", i);
    scanf("%d", &nadador->edad);
    printf("Introduce el nombre de la prueba de %d:\n", i);
    scanf("%s", nadador->prueba);
    printf("Introduce el tiempo de %d:\n", i);
    scanf("%f", &nadador->tiempo);
}

//Funcion para calcular la desviacion tipica
double desviacion(nadador* competidor) {
    float media = 0;
    nadador* ptr = competidor;
    for(int i = 0; i < ALUMNOS; i++, competidor++) {
        media += competidor->tiempo;
    }
    media /= ALUMNOS;
    float* diferencias = (float*)malloc(ALUMNOS*sizeof(float));
    for (int i = 0; i < ALUMNOS; i++, ptr++) {
        diferencias[i] = ptr->tiempo - media;
        diferencias[i] *= diferencias[i];
    }
    free(ptr);
    //Suma de las diferencias al cuadrado
    double varianza = 0;
    for (int i = 0; i < ALUMNOS; i++) {
        varianza += (double)diferencias[i];
    }
    varianza /= ALUMNOS;
    return (sqrt(varianza));
}
