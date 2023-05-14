/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
   char cargo[20];
  
   float salario,salarioL;
   int retorno;
    printf("Digite (A) caso seu cargo seja Programador e (B) caso seu cargo seja outro\n");
    scanf("%s",cargo);
    printf("\nDigite o eu salario:");
    scanf("%f",&salario);
   
    
if (strcmp(cargo, "programador") == 0){
    salarioL = salario*1.3;
    printf("%f Seu salario atualizado é: ",salarioL);
}
else{
    salarioL = salario*1.1;
    printf("%f Seu salario atualizado é: ",salarioL);
}
return 0;
}