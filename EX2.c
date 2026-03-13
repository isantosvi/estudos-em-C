#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j;

//  Preencher a matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
// Imprimir a matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}