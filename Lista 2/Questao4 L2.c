/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int Valor,Primeiro,Segundo,Terceiro;
    printf("O Valor recebido por eles é: \n");
    Valor = 780000;
    Primeiro = (Valor/100)*46;
    Segundo = (Valor/100)*32;
    Terceiro = (Valor/100)*22;
    printf("%d,%s",Primeiro,"para o Primeiro \n");
    printf("%d,%s",Segundo,"para o Segundo \n");
    printf("%d,%s",Terceiro,"para o Terceiro");
    return 0;
}
