#include<stdio.h>

int main() {

    int fat, n;

    printf("Digite o valor de N (No max. 15): ");
    scanf("%d", &n);

    if (n <= 15) {
        for(fat = 1; n > 1; n--) {
            fat = fat * n;
        }
    } else {
        printf("Valor invalido");
    }

    printf("\nFatorial: %d", fat);

return 0;
}