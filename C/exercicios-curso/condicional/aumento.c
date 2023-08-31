#include <stdio.h>
#include <math.h>

int main () {

    double salario, novo, aumento;

    printf("Digite o salario atual: ");
    scanf("%lf", &salario);

        if (salario <= 1000) {
            novo = salario * 1.2;
            aumento = novo - salario;
            printf("\nNovo salario sera de: R$ %.2lf\n", novo);
            printf("Aumento: %.2lf\n", aumento);
            printf("Aumento de: 20%%");
        }
        else if (salario > 1000 && salario <= 3000) {
            novo = salario * 1.15;
            aumento = novo - salario;
            printf("\nNovo salario sera de: R$ %.2lf\n", novo);
            printf("Aumento: %.2lf\n", aumento);
            printf("Aumento de: 15%%");
        }
        else if (salario > 3000 && salario <= 8000) {
            novo = salario * 1.1;
            aumento = novo - salario;
            printf("\nNovo salario sera de: R$ %.2lf\n", novo);
            printf("Aumento: %.2lf\n", aumento);
            printf("Aumento de: 10%%");
        }
        else {
            novo = salario * 1.05;
            aumento = novo - salario;
            printf("\nNovo salario sera de: R$ %.2lf\n", novo);
            printf("Aumento: %.2lf\n", aumento);
            printf("Aumento de: 5%%");
        }   

    return 0;
}