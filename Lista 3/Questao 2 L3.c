//Faça um programa para ler a temperatura do corpo medida com um termômetro. Caso
//a temperatura seja maior que 37 graus o paciente está com febre, caso contrário, sua
//temperatura está normal. Após ler a temperatura imprima a mensagem apropriada.
#include <stdio.h>
int main(){

int Temperatura;

printf("Digite sua Temperatura: ");
scanf("%d",&Temperatura);

if (Temperatura <= 37){
 printf("Você esta com a temperatura normal");
}
else {
 printf("Você Esta com Febre");
}
}