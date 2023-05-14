//Faça um algoritmo que leia um valor digitado pelo usuário e informe se o número é par ou ímpar. 

#include <stdio.h>
int main(){
printf("Digite o numero\n");
int numero,rest;
scanf("%d",&numero);
rest = numero%2;
if (rest != 0) {
    printf("O numero é impar");
}
else{
    printf("O numero é par");
}

}