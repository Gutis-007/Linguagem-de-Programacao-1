//Uma determinada companhia aérea só contrata aeromoças que preencham os
//seguintes requisitos:
//- Ter idade igual ou superior a 24 anos.
//- Ter altura igual ou superior a 1.70 m.
//- Falar com fluência 2 ou mais idiomas. 


#include<stdio.h>

int main()
{
    int Idade,Fluentes;
    float Altura;
    printf("Informe sua idade,altura e numero total de linguas fluentes:");
    scanf("%d%f%d",&Idade,&Altura,&Fluentes);
    if(Idade>=24){
        if(Altura>=1.70){
           if(Fluentes>=2){
               printf("Voce atende aos requisitos da vaga");
           } 
           else{
               printf("Voce não atende aos requisitos da vaga");
           }
        }
        else{
            printf("Voce não atende aos requisitos da vaga");
        }
    }
    else{
        printf("Voce não atende aos requisitos da vaga");
    }
}