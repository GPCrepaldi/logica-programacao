#include <stdio.h>

int main () {

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    while ( x != y) {
        if (x > y) {
            printf("\nDECRESCENTE!!!\n");
        } 
        else {
            printf("\nCRESCENTE!!!\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d %d", &x, &y);

    }

    return 0;
}