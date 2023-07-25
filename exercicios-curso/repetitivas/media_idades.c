#include <stdio.h>
#include <math.h>

int main () {
    
    int idade, npessoas;
    double soma ,media;

    printf("Digite a(s) idade(s): ");
    scanf("%d", &idade);

    if (idade < 0){
        printf("\nImpossível calcular\n");
    }
    else {
        soma = 0;
        npessoas = 0;

        while (idade >= 0) {
            soma = soma + idade;
            npessoas ++;

            printf("Digite a proxima idade: ");
            scanf("%d", &idade);
        }
        
        media = soma / npessoas;

        printf("\nA media de idades e de: %.1lf\n", media);
    }
    
    
    
}