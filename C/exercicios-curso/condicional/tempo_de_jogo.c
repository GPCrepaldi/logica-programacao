#include <stdio.h>

int main () {

    int inicio, final, duracao;

    printf("Hora inicial: ");
    scanf("%d", &inicio);

    printf("Hora final: ");
    scanf("%d", &final);
    
    if (inicio > final)
    {
        duracao = (24 - inicio) + final;
        printf("\nDuracao do jogo foi de: %d Hora(s)\n", duracao);
    }
    else if (inicio == final)
    {
        printf("\nDuracao do jogo foi de: 24 Hora(s)\n");
    }
    else
    {
        duracao = final - inicio;
        printf("\nDuracao do jogo foi de: %d Hora(s)\n", duracao);
    }
    
return 0;
}