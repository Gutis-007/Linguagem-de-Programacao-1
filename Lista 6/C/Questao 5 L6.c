#include <stdio.h>

int main() {
    int alunos;
    int i = 1;
    float media = 0;

    printf("Digite o número de alunos da sua turma: ");
    scanf("%d", &alunos);

    while (i <= alunos) {
        printf("Digite a nota do aluno: ");
        float nota;
        scanf("%f", &nota);
        media = media + nota;
        i = i + 1;
    }

    media = media / alunos;
    printf("A média da turma é: %.2f\n", media);

    return 0;
}
