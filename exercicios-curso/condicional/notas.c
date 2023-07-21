#include <stdio.h>
#include <math.h>

int main () {

    double nota1, nota2, final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    final = (nota1 + nota2) / 2;

    printf("\n\nNota Final = %.2lf\n", final);

    if (final >=60.00) {
        printf("Voce foi Aprovado!!!!\n");
    } else {
        printf("Voce foi Reprovado!!!!\n");
    }
    
return 0;
}

