#include <stdio.h>
#include <math.h>

int main () {

    int minutos;
    double valor;

    printf("Quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos > 100) {
        valor = 50 + ((minutos - 100) * 2);
    } else {
        valor = 50;
    }

    printf("Valor a pagar: R$%.2lf", valor);    

    return 0;
}