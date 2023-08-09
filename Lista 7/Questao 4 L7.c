/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int i,n;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n],aux;
  for (i=0;i<n;i++) {
    printf("Digite um numero: \n");
    scanf("%d",&vetor[i]);
  }
  int num;
  printf("Digite o valor a ser buscado: ");
  scanf("%d",&num);
 for(i=0;i<n;i++){
     if (vetor[i] == num){
         printf("\n Valor encontrado no local %d ",i);
     }
     else{
         printf(" \n Valor não encontrado");
     }

 }
}


