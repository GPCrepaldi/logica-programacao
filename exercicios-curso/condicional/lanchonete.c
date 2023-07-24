#include <stdio.h>
#include <math.h>

int main () {

    int produto, quantidade;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &produto);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    
    if (produto == 1)
    {
        valor = 5 * quantidade;
    }
    else if (produto == 2)
    {
        valor = 3.5 * quantidade;
    }
    else if (produto == 3)
    {
        valor = 4.8 * quantidade;
    }
    else if (produto == 4)
    {
        valor = 8.9 * quantidade;
    }
    else if (produto == 5)
    {
        valor = 7.32 * quantidade;
    }
    else
    {
        printf("Produto nao cadastrado");
    }

    printf("\n\nValor a pagar: R$%.2lf\n", valor);

    return 0;
}