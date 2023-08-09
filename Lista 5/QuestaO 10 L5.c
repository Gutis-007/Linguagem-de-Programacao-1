#include <stdio.h>

int main() {
    int contador_positivos = 0;
    float valor;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);

        if (valor > 0) {
            contador_positivos++;
        }
    }

    printf("Quantidade de valores positivos: %d\n", contador_positivos);

    return 0;
}
