//Faça um algoritmo que solicite ao usuário sua idade e informe se o mesmo já pode tirar
//carteira de motorista.
#include <stdio.h>
int main(){

int idade;

printf("Digite sua idade: ");
scanf("%d",&idade);

if (idade >= 16){
    printf("Você ja pode Tirar a Carteira de Motorista");
}
else {
 printf("Você ainda não pode tirar a carteira de Motorista");
}
}