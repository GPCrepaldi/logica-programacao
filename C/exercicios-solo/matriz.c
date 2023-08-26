#include <stdio.h>

int main () {

    int M, N, i, j;

    printf("Quantas linhas tera na matriz: ");
    scanf("%d", &M);
    printf("Quantas colunas tera na matriz: ");
    scanf("%d", &N);

    int mat[M] [N];

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++) {
            printf("Elemento [ %d , %d ]: ", i, j);
            scanf(" %d ", &mat[i][j]);
            }
        }
    
    printf("\nMATRIZ DIGITADA\n");

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}