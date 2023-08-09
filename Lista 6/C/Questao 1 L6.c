#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    i = n;

    while (i >= 1) {
        printf("%d patinhos foram passear Além das montanhas para brincar\n", i);
        printf("A mamãe gritou: Qua Qua Qua\n");
        i = i - 1;

        printf("Mas só %d patinhos voltaram de lá\n", i);
        
        if (i == 0) {
            printf("A mamãe patinha foi procurar Além das montanhas Na beira do mar\n");
            printf("A mamãe gritou: Qua Qua Qua\n");
            printf("E os %d patinhos voltaram de lá\n", n);
        }
    }

    return 0;
}