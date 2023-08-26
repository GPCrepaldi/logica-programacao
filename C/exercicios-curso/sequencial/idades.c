#include <stdio.h>
#include <math.h>

void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
        fgets(buffer, length, stdin);
        strtok(buffer, "\n");
}

int main () {

    double media, idade1, idade2;
    char nome1[20], nome2[20];

    printf("Qual o nome da primeira pessoa: ");
    ler_texto (nome1, 20);

    printf("Qual a idade da primeira pessoa: ");
    scanf("%lf", &idade1);
    limpar_entrada ();

    printf("Qual o nome da segunda pessoa: ");
    ler_texto (nome2, 20);

    printf("Qual a idade da segunda pessoa: ");
    scanf("%lf", &idade2);
    limpar_entrada ();

    media = (idade1 + idade2) / 2;

    printf("\n\nDados da primeira pessoa: \n");
    printf("Nome: %s\n", nome1);
    printf("Idade: %.0lf\n", idade1);
    
    printf("\n\nDados da segunda pessoa: \n");
    printf("Nome: %s\n", nome2);
    printf("Idade: %.0lf\n", idade2);

    printf("\nA idade media de %s e %s e de: %.1lf\n", nome1, nome2, media);

    return 0;
}