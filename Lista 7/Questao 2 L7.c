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
  float vetor[n],aux;
  for (i=0;i<n;i++) {
    printf("Digite um numero: \n");
    scanf("%f",&vetor[i]);
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

printf("\n%f",vetor[n-1]);

}


