#include <stdio.h>
#include <math.h>

int main () {

    char escala;
    double celsius, fahrenheit;

    printf("A temperatura estara em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em fahrenheit: ");
            scanf("%lf", &fahrenheit);

        celsius = 5.0/9.0 * (fahrenheit - 32);

        printf("\n\nTemperatura equivalente em Celsius: %.2lf\n", celsius);
    } 
    else if (escala == 'C' || escala == 'c'){
        printf("Digite a Temperatura em celsius: ");
            scanf("%lf", &celsius);

        fahrenheit = celsius * 9 / 5 + 32;

        printf("\n\nTemperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
    }
    else {
        printf("Nao tem escala para isto!!!");
    }

    return 0;
}