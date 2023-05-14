/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float result,dias;
    printf("Digite o numero de dias trabalhados \n");
    scanf("%f",&dias);
    result = (dias*30)*0.92;
    printf("O valor Liquido a Ser pago é de: ");
    printf("%f",result);

    return 0;
}
