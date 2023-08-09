#include<stdio.h>
#include <stdlib.h>
int main()
{
    
    int idade = 20;
    float altura = 1.8; 
    char letra ='A';
    
    int *ptrIdade = &idade;
    float *ptrAltura = &altura;
    char*ptrLetra = &letra;
    
    printf("Idade antes de modificar: %d\n",idade);
    printf("Idade antes de modificar: %.2f\n",altura);
    printf("Idade antes de modificar: %c\n",letra);
    
    *ptrIdade = 10;
    *ptrAltura = 1.5;
    *ptrLetra = 'B';
    
    printf("\nIdade depois de modificar: %d\n",idade);
    printf("Idade depois de modificar: %.2f\n",altura);
    printf("Idade depois de modificar: %c\n",letra);
    
    
}
