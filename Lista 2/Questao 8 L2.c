/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int Degrao,Altura,Result;

printf("Digite a altura do degrao\n");
scanf("%d",&Degrao);
printf("\nDigite a altura que quer subir\n");
scanf("%d",&Altura);
Result = Altura/Degrao;

printf("\nO numero de degrais nescessario é de :\n");
printf("%d",Result);
}
