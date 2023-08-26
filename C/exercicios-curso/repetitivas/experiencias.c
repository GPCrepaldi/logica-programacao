#include <stdio.h>

int main () {

    int testes, cobaia, cobaiaT, ratos = 0, sapos = 0, coelhos = 0;
    double pc, pr, ps;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &testes);

        for (int i = 0; i < testes; i++) {
            printf("Quantidades de cobaia: ");
            scanf("%d", &cobaia);

            printf("Tipo de cobaia: ");
            scanf(" %c", &tipo);

                if ( tipo == 'r' || tipo == 'R') {
                    ratos = ratos + cobaia;
                } else if ( tipo == 's' || tipo == 'S' ) {
                    sapos = sapos + cobaia;
                } else if ( tipo == 'c' || tipo == 'C' ) {
                    coelhos = coelhos + cobaia;
                }
        }

    cobaiaT = ratos + coelhos + sapos;
    pc = ((double)coelhos / cobaiaT) * 100;
    pr = ((double)ratos / cobaiaT) * 100;
    ps = ((double)sapos / cobaiaT) * 100;

    printf("\nRELATORIO FINAL :\n");
    printf("Total: %d\n", cobaiaT);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", pc);
    printf("Percentual de ratos: %.2lf\n", pr);
    printf("Percentual de sapos: %.2lf\n", ps);

return 0;
}