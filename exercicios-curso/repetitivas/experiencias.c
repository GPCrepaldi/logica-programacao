#include <stdio.h>

int main () {

    int testes, cobaia, cobaiaT, rato = 0, sapo = 0, coelho = 0, total, tc, tr, ts;
    double pc, pr, ps;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("&d", &testes);

    for (int i = 1; i <= testes; i++) {
        printf("Quantidades de cobaia: ");
        scanf("%d", &cobaia);

        printf("Tipo de cobaia: ");
        scanf("%c", &tipo);

        if ( tipo == 'r' || tipo == 'R') {
            rato = rato + cobaia;
        } if else ( tipo == 's' || tipo == 'S' ) {
            sapo = sapo + cobaia;
        } if else ( tipo == 'c' || tipo == 'C' ) {
            coelho = coelho + cobaia;
        }

        cobaiaT =+ cobaia;
    }

    percentual = ;

    printf("\nRELATORIO FINAL :\n");
    printf("Total: \n");
    printf("Total de coelhos: \n");
    printf("Total de ratos: \n");
    printf("Total de sapos: \n");
    printf("Percentual de coelhos: \n");
    printf("Percentual de ratos: \n");
    printf("Percentual de sapos: \n");
}