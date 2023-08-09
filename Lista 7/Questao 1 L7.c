/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int aux,i,n;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for (i=0;i<n;i++) {
    printf("Digite um numero: \n");
    scanf("%d",&vetor[i]);
  }
  int f ,j;
  for (f = 1; f <n; f ++) {
   for (j = 0; j <n-f; j ++) {
    if (vetor [j]> vetor [j + 1]) {
       aux = vetor[j];
       vetor[j] = vetor[j+1];
       vetor[j+1] = aux;
    }
  }
}

printf("\n%d",vetor[n-1]);

}


