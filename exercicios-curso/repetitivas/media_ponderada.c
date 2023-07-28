#include <stdio.h>

int n;
double a, b, c, x;


int main () {

printf("Quantos casos voce vai digitar? ");
scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite os 3 numeros: \n");
        scanf("%lf %lf %lf", &a, &b, &c);
    }
}
