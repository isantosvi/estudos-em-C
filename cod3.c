#include <stdio.h>

int main() {
    int numero, i;
    long long fatorial = 1;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("Resultado: %lld\n", fatorial);

    return 0;
}