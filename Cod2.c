#include <stdio.h>

int main(){
    int numero = 0, i =1;
     long long fatorial = 1;

     printf(" Informe um numero: ");
     scanf("%d", &numero);

    while(i <=  numero ){
        fatorial = fatorial * i;
        i++;
    }

    printf("Resultado: %11d", fatorial);
}