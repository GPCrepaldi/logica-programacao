#include <stdio.h>

int main () {
    
    int x, y;

    printf("Digite os valores das Coordenada X e Y:\n");
    scanf("%d %d", &x, &y);

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            printf("Quadrante Q1");
        }
        else if (x < 0 && y > 0) {
            printf("Quadrante Q2");
        }
        else if (x < 0 && y < 0) {
            printf("Quadrante Q3");
        }
        else {
            printf("Quadrante Q4");
        }
    printf("\nDigite os valores das coordenadas x e y:\n");
    scanf("%d %d", &x, &y);
    }
return 0;
}