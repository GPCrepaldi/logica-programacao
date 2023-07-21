#include <stdio.h>
#include <math.h>

int main () {
    
    double a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);

    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0)
    {
        printf("\n\nEsta equacao nao possui raizes reais!\n");
    } else {
        printf("\n\nO resultado e:\nx1 = %.2lf\nx2 = %.2lf\n", x1, x2);
    }
    return a;
}