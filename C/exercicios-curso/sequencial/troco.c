#include <stdio.h>
#include <math.h>

int main () {

    double produto, quantidade, soma, dinheiro, troco;

    printf("Valor do produto: R$");
    scanf("%lf", &produto);

    printf("Quantidade comprada: ");
    scanf("%lf", &quantidade);

    printf("Dinheiro recebido: R$");
    scanf("%lf", &dinheiro);

    soma = quantidade * produto;
    troco = dinheiro - soma;

    printf("\n\nTROCO: R$%.2lf\n", troco);

    return 0;
}