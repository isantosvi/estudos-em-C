#include <stdio.h>

int main() {
    int numero = 0;
    int soma = 0;

    while (numero >= 0) {
        printf("Informe um numero (negativo para parar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        }
    }

    printf("A soma total é: %d\n", soma);

    return 0;
}
