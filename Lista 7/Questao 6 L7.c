/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A[50],B[50];
    int i, menor;
    for(i=0;i<50;i++){
        printf("Digite os numeros de A: ");
        scanf("%d",&A[i]);
    }

    for(i=0;i<50;i++){
        printf("Digite os numeros de B: ");
        scanf("%d",&B[i]);
    }
    
    for(i=0;i<50;i++){
        if (B[i]<=B[i+1]){
            menor = B[i];
        }
    }
    
   for(i=0;i<50;i++){
       A[i]=A[i]*menor;
   }
   for(i=0;i<50;i++){
       printf("%d\n",A[i]);
   }
}
