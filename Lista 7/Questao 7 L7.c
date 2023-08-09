/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A[2000];
    int i,b;
    for(i=0;i<2000;i++){
        printf("Digite os numeros de A: ");
        scanf("%d",&A[i]);
    }
  
   for(i=0;i<2000;i++){
       if(A[i]>=1000){
           A[i] = A[i]*1.2;
           b++;
       }
   }
   printf("O numero de limites autualizados foi de %d e a lista é: ",b);
    for(i=0;i<2000;i++){
      printf ("%d ",A[i]);
      
   }
}
