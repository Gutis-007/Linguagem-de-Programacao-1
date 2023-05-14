/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
float Produto,Parcela,PcDisconto,Comissao,ComissaoP;
printf("Digite o valor do Produto: \n");
scanf("%f",&Produto);
PcDisconto = Produto*0.9;
Comissao = (PcDisconto/100)*5;
ComissaoP = (Produto/100)*5;
Parcela = Produto/3;
printf("O valor do Produto com desconto é: \n");
printf("%f",PcDisconto);
printf("\nO valor da Comissao a Vista é: \n");
printf("%f",Comissao);
printf("\nO valor da Parcela é: \n");
printf("%f",Parcela );
printf("\nO valor da comissao com parcela é: \n");
printf("%f",ComissaoP);
}
