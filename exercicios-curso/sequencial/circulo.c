#include <stdio.h>
#include <math.h>

int main () {

    double pi, raio, area;
    pi = 3.14159;

    printf("Qual o valor do RAIO da circunferencia: ");
    scanf("%lf", &raio);

    area = pow(raio, 2) * pi;

    printf("\n\nAREA = %.3lf\n", area);

    return 0;
}