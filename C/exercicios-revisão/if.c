#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Qual seu salario? \n");
    scanf("%d", &n);

    if (n <= 2000)
    {
        printf("Precisa de uma promocao");
    }
    else
    {
        printf("Nao precisa de uma promocao");
    }
    
    
}
