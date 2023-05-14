/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float SalarioB,Impos,Gratif,Result;
    printf("Digite o Valor do Salario \n");
    scanf("%f",&SalarioB);
    
    Gratif = (SalarioB/100)*5;
    Impos = (SalarioB/100)*7;
    Result = SalarioB + Gratif - Impos ;
    printf("O valor Liquido a Ser pago é de: ");
    printf("%f",Result);

    return 0;
}
