//1. Faça um programa que peça para o usuário pensar em número de 1 a 4 e depois
//pergunte se o número é maior que 2 (S-Sim ou N-Não), e caso seja maior que 2, pergunte se
//ele é maior que 3, ou caso não seja maior que 2, pergunte se é maior que 1. Ao final o
//programa deve mostrar o número que o usuário pensou. 


#include <stdio.h>

int main(void) {
  printf("Pense num numero de 1 a 4\n");
  printf("O numero é maior que 2? (S-Sim ou N-Não)\n");
  char resp;
  scanf("%s",&resp);
  if (resp == 'S'){
    printf("Ele é maior que 3? (S-Sim ou N-Não)\n");
    char resp2;
    scanf("%s",&resp2);
    if (resp2 == 'S'){
    printf("Então o numero é 4");
    }
    else{
    printf("Então o numero é 3");
    }
  }
  else{
    printf("Ele é maior que 1? (S-Sim ou N-Não)\n");
    char resp2;
    scanf("%s",&resp2);
    if (resp2 == 'S'){
    printf("Então o numero é 2");
    }
    else{
    printf("Então o numero é 1");
    }
  }
  return 0;
}