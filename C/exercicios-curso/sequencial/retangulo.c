#include <stdio.h>
#include <math.h>

int main () {

    double base, altura, area, perimetro, diagonal;

    printf("Qual a base do retangulo?: ");
    scanf("%lf", &base);

    printf("Qual a altura do retangulo?: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("base do retangulo: %.1lf\n", base);
    printf("Altura do retangulo: %.1lf\n", altura);
    printf("Area: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);

    return 0;
}