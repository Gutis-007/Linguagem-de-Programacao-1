/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i,num;
int vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,99};
 printf("Digite um numero: ");
 scanf("%d",&num);
for (i=0;i<20;i++){
    if (vetor[i]<num){
        vetor[i] = num;
    }
}
for (i=0;i<20;i++){
    printf("%d ",vetor[i]);
}
}


