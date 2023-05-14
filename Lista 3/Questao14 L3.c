/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int tempo;
    printf("Informe o tempo de aquecimento em segundos: ");
    scanf("%d", &tempo);

    
    int horas = tempo / 3600;
    int minutos = (tempo % 3600) / 60;
    int segundos = (tempo % 3600) % 60;

    
    printf("Horas: %d", horas);
    printf("\nMinutos: %d",minutos);
    printf("\nSegunfdos: %d",segundos);
    return 0;
}
   
   
 
