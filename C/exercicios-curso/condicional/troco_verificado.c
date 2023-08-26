#include <stdio.h>
#include <math.h>

int main () {

    int  unidade;
    double produto, total, pagamento, troco;

    printf("Preco do produto: ");
    scanf("%lf", &produto);

    printf("Quantidade comprada: ");
    scanf("%d", &unidade);

    total = produto * unidade;

    printf("\nValor a pagar: %.2lf\n", total);

    printf("\nPagamento oferecido pelo cliente: ");
    scanf("%lf", &pagamento);

    troco = pagamento - total;

    printf("\nValor do produto: %.2lf\n", produto);
    printf("Unidades: %d\n", unidade);
    printf("Dinheiro recebido: %.2lf\n", pagamento);

    if (pagamento < total)
    {
        troco = troco * (-1);
        printf("\n\nPagamento insuficiente, falta: %.2lf\n", troco);
    } else {
        printf("\n\nTroco: %.2lf\n", troco);
    }
    

    return 0;
}