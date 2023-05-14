//Faça um algoritmo que solicite ao usuário 2 números e imprima o maior deles.
#include <stdio.h>
int main(){

int Numero1,Numero2;

printf("Digite o Primeiro numero: ");
scanf("%d",&Numero1);

printf("Digite o Segundo numero: ");
scanf("%d",&Numero2);

if (Numero1> Numero2){
 printf("O maior numero é: ");
 printf("%d",Numero1);
}
else{
 printf("O maior numero é: ");
 printf("%d",Numero2);
}
}