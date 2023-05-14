//Faça um programa que leia o valor do salário base do usuário mais suas ratificações.
//Aplicar as alíquotas do imposto de renda e após os devidos descontos informar o valor do
//salário líquido.
//a) até 999,00 – não paga imposto
//b) até 1499,00 – desconto de 15%
//c) acima de 1499,00 – desconto de 27%

#include <stdio.h>
int main(){
printf("Digite o seu salario bruto: ");
float salarioB,salarioL;
scanf("%f",&salarioB);
if (salarioB < 999.00){
    printf("Você não paga imposto! ");
    printf("\nSeu salario Liquido é:\n ");
    printf("%f",salarioB);
}
else if(salarioB>999.00 && salarioB<1499.00){
    salarioL = salarioB*0.85;
    printf("Você paga 15 porcento de imposto!");
    printf("\nSeu salario Liquido é:\n ");
    printf("%f",salarioL);
}
else{
    salarioL = salarioB*0.73;
    printf("Você paga 27 porcento de imposto!");
    printf("\nSeu salario Liquido é:\n ");
    printf("%f",salarioL);
}





}