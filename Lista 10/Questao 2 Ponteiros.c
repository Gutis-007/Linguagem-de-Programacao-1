
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include <stdlib.h>
void Troca_de_Lugar(int *A,int *B){
    int temp = *A;
    
    *A = *B;
    *B = temp;
    
}
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    
    printf("Valores originais: A = %d, B = %d\n", valor1, valor2);
    
    Troca_de_Lugar(&valor1,&valor2);
    
    printf("Valores trocados: A = %d, B = %d\n", valor1, valor2);

}
