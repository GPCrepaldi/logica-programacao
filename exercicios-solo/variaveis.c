#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale (LC_ALL,"");
    
    int idade;
    double salario, altura;
    char genero;
    char nome [50];

        /*podemos colocar o valor da variavel quando vc declara ela, ao inves de colocar logo apos
        como por exemplo

        int idade = 20;
        double salario, altura = 58000.5;
        char genero = 1.63;
        char nome [50] = "Maria Silva";*/

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Generio = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}