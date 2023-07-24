#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c;

    printf("Distnacia um: ");
    scanf("%lf", &a);
    
    printf("Distnacia dois: ");
    scanf("%lf", &b);
    
    printf("Distnacia tres: ");
    scanf("%lf", &c);

    if (a > b && a > c) {
        printf("\n\nMaior distancia: %.2lf\n", a);
    } else if (b > c) {
        printf("\n\nMaior distnacia: %.2lf\n", b);
    } else {
        printf("\n\nMaior distancia: %.2lf\n", c);
    }

    return 0;
}