#include <stdio.h>
#include <string.h>

void Cadastro() {
    char nome[100];
    char funcao[100];
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite sua função na empresa: ");
    fgets(funcao, sizeof(funcao), stdin);
    funcao[strcspn(funcao, "\n")] = '\0'; 
    
    int num_capacitacoes;
    printf("Quantas capacitações você realizou? ");
    scanf("%d", &num_capacitacoes);
    
    char capacitacoes[num_capacitacoes][21];
    getchar();
    
    for (int i = 0; i < num_capacitacoes; i++) {
        printf("Digite o nome da capacitação %d (máximo 20 letras): ", i + 1);
        fgets(capacitacoes[i], sizeof(capacitacoes[i]), stdin);
        capacitacoes[i][strcspn(capacitacoes[i], "\n")] = '\0'; 
        if (strlen(capacitacoes[i]) > 20) {
            printf("O nome da capacitação deve ter no máximo 20 letras.\n");
            return;
        }
    }
    
    printf("\nDados do funcionário:\n");
    printf("Nome: %s\n", nome);
    printf("Função: %s\n", funcao);
    printf("Capacitações:\n");
    for (int i = 0; i < num_capacitacoes; i++) {
        printf("%d. %s\n", i + 1, capacitacoes[i]);
    }
}

int main() {
    Cadastro();
    return 0;
}
