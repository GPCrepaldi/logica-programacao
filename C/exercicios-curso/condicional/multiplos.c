#include <stdio.h>
#include <math.h>

int main () {
    
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0 || num2 % num1 ==0)
    {
        printf("\nEsses numeros sao multiplos\n");
    }
    else
    {
        printf("\nEsses numeros nao sao multiplos!!\n");
    }
    
    return 0;
}