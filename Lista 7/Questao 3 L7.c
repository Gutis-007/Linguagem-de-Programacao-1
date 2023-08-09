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
 for(i=0;i<n;i++){
     if (vetor[i]%2 == 0){
         printf("\n%d",vetor[i]);
     }
 }



}


