#include <stdio.h>

int main() {
    int i = 1;
    int maior = 0;
    int maior2 = 0;

    while (i <= 10) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero >= maior) {
            maior2 = maior;
            maior = numero;
        } else if (numero < maior && numero > maior2) {
            maior2 = numero;
        }
        
        i = i + 1;
    }
     
    printf("Os maiores números dentre os digitados são: %d e %d\n", maior, maior2);

    return 0;
}
