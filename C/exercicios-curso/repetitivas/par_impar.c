#include <stdio.h>

int main () {

    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x % 2 != 0 && x > 0) {
            printf("Impar Positivo\n");
        } else if (x % 2 != 0 && x < 0) {
            printf("Impar Negativo\n");
        } else if (x % 2 == 0 && x > 0) {
            printf("Par Positivo\n");
        } else if (x % 2 == 0 && x < 0) {
            printf("Par Negativo\n");
        } else {
            printf("Nulo\n");
        }
    }
return 0;
}