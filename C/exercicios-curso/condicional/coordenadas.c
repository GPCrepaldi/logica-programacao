#include <stdio.h>

int main () {

    double x, y;

    printf("Digitar o valor de X: ");
    scanf("%lf", &x);

    printf("Digite o valor de Y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0)
    {
        printf("Q1");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4");
    }
    else if (x == 0) 
    {
        printf("Eixo x");
    }
    else if (y == 0)
    {
        printf("Eixo y");
    }
    else 
    {
        printf("Origem");
    }
 return 0;
}