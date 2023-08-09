#include <stdio.h>

int main() {
    int numero;
    int i = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("A tabuada do número digitado é:\n");

    while (i <= 10) {
        int taboada = numero * i;
        printf("%d * %d = %d\n", numero, i, taboada);
        i = i + 1;
    }

    return 0;
}
