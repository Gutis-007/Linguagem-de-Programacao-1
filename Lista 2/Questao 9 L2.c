#include <stdio.h>
int main(){

float Aposta1,Aposta2,Aposta3,ApostaTotal,PremioTotal,P1,P2,P3,Premio1,Premio2,Premio3;

printf("Digite o valor das apostas e o valor do premio: ");
scanf("%f%f%f%f",&Aposta1,&Aposta2,&Aposta3,&PremioTotal);

ApostaTotal = Aposta1 + Aposta2 + Aposta3;
P1 = ApostaTotal/Aposta1;
P2 = ApostaTotal/Aposta2;
P3 = ApostaTotal/Aposta3;

Premio1 = PremioTotal*P1;
Premio2 = PremioTotal*P2;
Premio3 = PremioTotal*P3;

printf("\nO apostador 1 recebe: %f\n", Premio1);
printf("O apostador 2 recebe: %f\n", Premio2);
printf("O apostador 3 recebe: %f\n", Premio3 );
return 0;

}