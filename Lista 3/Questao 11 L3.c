//O custo ao consumidor de um carro novo é a soma do custo de fabricação mais a
//percentagem do distribuidor e dos impostos. Supondo que o percentual do distribuidor seja
//de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fabricação de um
//carro e escreva o custo ao consumidor.


#include <stdio.h>

int main(void) {
  float valorP,valorL;
  printf("Digite o valor de Produção do Carro: \n");
  scanf("%f",&valorP);
  valorL = valorP*1.28 +(valorP*0.45);
  printf("O valor do carro com os impostos é :%F",valorL);
  return 0;
}