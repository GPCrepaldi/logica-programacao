#include <stdio.h>
#include <string.h>

void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
}
    //comando para limpar memoria

int main () {
    
    int idade;
    double salario, altura;
    char genero;
    char nome [50];



    printf("Digite o valor da idade = ");
    scanf("%d", &idade);

    printf("Digite o valor do salario = ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura = ");
    scanf("%lf", &altura);

    printf("Digite o nome = ");
    scanf("%s", nome);
    //o %s só serve para caso seja apenas um nome, caso seja mais do que uma palavra, ele não lê

    printf("Digite o nome = ");
    limpar_entrada ();
    fgets(nome, 50, stdin);
    //assim, você consegue escrever mais do que uma palavra

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Nome = %s\n", nome);

    return 0;
}