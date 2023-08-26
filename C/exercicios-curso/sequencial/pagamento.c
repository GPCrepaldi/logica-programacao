#include <stdio.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main () {

    double valor, hora, pagamento;
    char nome[20];

    printf("Nome do funcionario: ");
    ler_texto (nome, 20);
    printf("valor da hora: ");
    scanf("%lf", &valor);
    printf("Qunatidade de horas trabalhadas: ");
    scanf("%lf", &hora);
    
    pagamento = valor * hora;

    printf("\n\nO pagamento de %s sera de: %.2lf\n", nome, pagamento);

    return 0;
}