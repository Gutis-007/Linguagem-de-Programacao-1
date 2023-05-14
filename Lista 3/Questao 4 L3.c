//Faça um programa que leia 2 provas (peso 3 cada uma) e um trabalho (peso 1). Caso a
//média final seja maior ou igual a 7 imprimir a mensagem “aprovado”, caso contrário,
//imprimir a mensagem “reprovado”.

#include <stdio.h>
int main(){
printf("Digite o nota das 2 provas e do trabalho\n");
float nota1,nota2,trabalho,Resultado,mult1,mult2,mult3;

scanf("%f%f%f",&nota1,&nota2,&trabalho);
mult1 = nota1*3;
mult2 = nota2*3;
mult3 = trabalho;
Resultado = (mult1+mult2+mult3)/3;
if (Resultado>7){
 printf("Voce esta aprovado");
}
else{
    printf("Voce esta reprovado");
}
}