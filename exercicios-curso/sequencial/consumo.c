#include <stdio.h>
#include <math.h>

int main () {
    
    double distancia, gasto, consumo;

    printf("Distancia em Km percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustivel em L consumido: ");
    scanf("%lf", &gasto);

    consumo = distancia / gasto;

    printf("\n\nConsumo medio de: %.3lfL/Km\n", consumo);
    
    return 0;
}