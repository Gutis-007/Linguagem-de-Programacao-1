#include <stdio.h>

int main() {
    int i = 1;
    int maior = 0;

    while (i <= 10) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero >= maior) {
            maior = numero;
        }
        
        i = i + 1;
    }
     
    printf("O maior número dentre os digitados é: %d\n", maior);

    return 0;
}
