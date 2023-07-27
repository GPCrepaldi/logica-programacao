#include <stdio.h>
#include <math.h>

int main () {

    int num, resultado;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        resultado = num * i;

        printf("\n%d x %d = %d\n", num, i, resultado);
    }
return 0;
}