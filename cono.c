#include <stdio.h>

#define PI 3.1416
#define VOLCONO(radio, altura) ((PI*(radio*radio)*altura)/3.0)

int main() {
    float r, h, v;
    printf("Volume of a cone\n");
    printf("Intodusca el radio del cono:\n");
    scanf("%f", &r);
    printf("Introduzca la altura del cono:\n");
    scanf("%f", &h);
    v = VOLCONO(r, h);
    printf("El volumen del cono es: %.2f\n", v);
    return 0;
}