
#include <stdio.h>

int main() {
    int i = 1;
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    printf("Os números pares entre 1 e o número digitado são:\n");
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }

    i = 1;
    printf("Os números ímpares entre 1 e o número digitado são:\n");
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    
    return 0;
}