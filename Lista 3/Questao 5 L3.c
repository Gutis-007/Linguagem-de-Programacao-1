/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int Numero1,Numero2;
    printf("Digite os numeros: ");
    scanf("%d%d",&Numero1,&Numero2);
    if(Numero1%Numero2 != 0){
        printf("Não são Divisores Perfeios");
    }
    else{
        printf("São divisores Perfeios");
    }
    
    return 0;
}
