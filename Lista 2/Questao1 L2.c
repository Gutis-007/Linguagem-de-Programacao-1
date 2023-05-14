/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float Comp,Poleg;
    printf("Coloque o comprimento a ser convertido:");
    scanf("%f",&Poleg);
    Comp = Poleg*2.54;
    
  printf("O valor convertido é:");
  
  printf("%f",Comp);
    
    return 0;
}
