#include <stdio.h>

int fibonacci();

int main() {
    int numeros;
    printf("***Numeros de Fibonacci***\n");
    printf("Cuantos numeros desesas?:\n");
    scanf("%d", &numeros);
    printf("Secuencia de Fibonacci: 0, 1");
    for(int i = 2; i < numeros; i++) {
        printf(", %d", fibonacci());
    }
    return 0;
}

int fibonacci() {
    static int x = 0;
    static int y = 1;
    y = y + x;
    x = y - x;
    return y;
}