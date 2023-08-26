#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main () {

    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    limpar_entrada ();

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    limpar_entrada ();

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;
    

    printf("Area do terreno e: %.2lf\n", area);
    printf("Preco do terreno e: %.2lf\n", preco);

    return 0;
}