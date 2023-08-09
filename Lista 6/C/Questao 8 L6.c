/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lado;
    printf("Digite o tamanho do lado");
    scanf("%d",&lado);
    for(int i=1;i<=lado;i++){
        for(int j=1;j<=lado;j++){
            printf("*");
            if (j == lado){
                printf("\n");
            
            }
        }
    }

    return 0;
}
