/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float Prod,Desc,Result;
    printf("Coloque o Valor do Produto:");
    Desc = 0.88;
    scanf("%f",&Prod);
    Result = Prod*Desc;
    printf("O Valor com Desonto é: ");
    printf("%f",Result);
    return 0;
}
