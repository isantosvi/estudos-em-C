#include <stdio.h>

int main(){

    int matriz[4][4];
    int i, j;
    int  somaTotal =0, somaInicio= 0, somaFinal = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;


//  Preencher a matriz
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
           printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
//Somar todos valores da matriz
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            somaTotal += matriz[i][j];

            if(j ==0){
                somaInicio += matriz[0][0];
            }
            else if(j == 4){
                somaFinal += matriz[3][3];
            }
        }
    }
// Imprimir a matriz

    printf(" Soma dos numeros: %d \n", somaTotal);
    printf(" Soma dos numeros da primeira coluna: %d \n", somaInicio);
    printf(" Soma dos numeros da segunda coluna: %d \n", somaFinal);
    printf("\n");


    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}