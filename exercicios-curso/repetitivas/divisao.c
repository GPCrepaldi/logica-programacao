#include <stdio.h>
#include <math.h>

int main () {

    int casos;
    double numerador, denominador, resultado;

    printf("Casos que voce ira digitar: ");
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        
        printf("Digite o valor do numerador: ");
        scanf("%lf", &numerador);

        printf("Digite o valor do denominador: ");
        scanf("%lf", &denominador);

        resultado = numerador / denominador;

            if (denominador == 0) {
                printf("IMPOSSIVEL DIVIDIR\n\n");
            } else {
                printf("DIVISAO: %.1lf\n\n", resultado);
            }
    }
    
return 0;
}