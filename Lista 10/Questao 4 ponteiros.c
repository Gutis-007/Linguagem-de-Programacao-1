#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do array de inteiros: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    int *array = (int *)malloc(tamanho * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória para o array.\n");
        return 1;
    }

    printf("Digite os valores a serem inseridos no array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray inserido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    free(array); // Liberar memória alocada

    return 0;
}
