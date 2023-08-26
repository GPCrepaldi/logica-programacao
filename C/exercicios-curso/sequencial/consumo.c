#include <stdio.h>
#include <math.h>

int main () {
    
    double distancia, gasto, consumo;

    printf("Distancia em Km percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustivel em L consumido: ");
    scanf("%lf", &gasto);

    consumo = distancia / gasto;

    printf("\n\nConsumo medio de: %.3lf Km/L\n", consumo);
    
    return 0;
}