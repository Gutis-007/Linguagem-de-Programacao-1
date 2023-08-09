#include <stdio.h>

int main() {
    float salario, despesas = 0, valorConta;
    int quantidadeContas, i;

    printf("Digite o salário da pessoa: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de contas a serem pagas: ");
    scanf("%d", &quantidadeContas);

    for (i = 1; i <= quantidadeContas; i++) {
        printf("Digite o valor da conta %d: ", i);
        scanf("%f", &valorConta);
        despesas += valorConta;
    }

    float diferenca = salario - despesas;

    if (diferenca >= 0) {
        printf("Diferença entre salário e despesas: %.2f\n", diferenca);
    } else {
        printf("Reduzir despesas\n");
    }

    return 0;
}
