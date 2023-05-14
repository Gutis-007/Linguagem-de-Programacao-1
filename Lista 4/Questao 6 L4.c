//Escreva um programa que calcula um reajuste salarial, de acordo com as regras a seguir:
//• Se o salário for menor que R$ 500,00 então o reajuste é de 15%
//• Se o salário estiver entre R$ 500,00 e R$ 1.000,00 então o reajuste é de 8%
//• Se o salário for superior R$ 1.000,00 então o reajuste é de 3%

#include <stdio.h>
int main(){
printf("Digite o seu salario bruto: ");
float salarioB,salarioL;
scanf("%f",&salarioB);
if (salarioB <= 500.00){
    printf("\nSeu salario Liquido com reajuste é:\n ");
    salarioL = salarioB*1.15;
    printf("%f",salarioL);
}
else if(salarioB>500.00 && salarioB<=1000.00){
    salarioL = salarioB*1.08;
    printf("\nSeu salario Liquido com reajuste é:\n ");
    printf("%f",salarioL);
}
else{
    salarioL = salarioB*1.03;
    printf("\nSeu salario Liquido com reajuste é:\n ");
    printf("%f",salarioL);
}


return 0;


}