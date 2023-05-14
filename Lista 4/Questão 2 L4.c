//Para ser apta a doar sangue a pessoa deve ter entre 18 e65 anos e pesar no mínimo
//50kg. Escreva um programa que leia a idade e o peso de uma pessoa e apresente na tela
//uma mensagem informando se ela pode ser doadora ou não

#include <stdio.h>

int main() {
    int idade;
    float peso;

    printf("Digite a Idade: ");
    scanf("%d", &idade);

    printf("Digite o Peso(Kg): ");
    scanf("%f", &peso);

    if (idade >= 18 && idade <= 65) {
        if(peso >= 50){
         printf("Pode doar sangue.\n");   
        }
        else{
         printf("Não pode doar sangue.\n"); 
        }
    } else {
     printf("Não pode doar sangue.\n");  
    }

    return 0;
}
