#include <stdio.h>
#include <math.h>

int main  () {

    int senha;

    printf("Digite a senha: 2312\n");
    scanf("%d", &senha);

    while (senha != 2312) {
        printf("Senha invalida! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("\nAcesso permitido!!\n");

return 0;
}