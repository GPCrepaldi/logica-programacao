#include <stdio.h>

int main () {

int num, alcool, gasolina, diesel;
alcool = 0;
gasolina = 0;
diesel = 0;
    
    printf("Informe um c9digo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &num);

    while (num != 4) {
        if (num == 1) {
            alcool ++;
        }
        else if (num == 2) {
            gasolina ++;
        }
        else if (num == 3) {
            diesel ++;
        }  
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &num);
    }

    printf("\nMuito Obrigado\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

return 0;
}