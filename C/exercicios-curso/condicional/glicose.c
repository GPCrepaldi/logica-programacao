#include <stdio.h>
#include <math.h>

int main ()  {

    double medida;

    printf("Digite a medida de glicose: ");
    scanf("%lf", &medida);

    if (medida <= 100){
        printf("Classificacao: Normal!");
    } else if (medida <= 140) {
        printf("Classificacao: Elevado!!");
    } else {
        printf("Classificacao: Diabetes!!!!");
    }

    return 0;
}