//Faça um programa onde o usuário informe 2 valores e a operação que deseja realizar.
//As seguintes operações podem ser realizadas:
//a) “soma”
//b) ”subtração”
//c) ”multiplicação”
//d) “divisão”
#include <stdio.h>

int main(void) {

float numero1,numero2;
int result;
char opcao;
  
printf("Digite os numero a serem utilizados na conta");
scanf("%f%f",&numero1,&numero2);
printf("Digite o operador a ser utilizado a) soma b) subtração c) multiplicação d) divisão ");
scanf("%s",&opcao);
if (opcao == 'b'){
  result = numero1 - numero2;
  printf("O resultado é: %d",result);
}
else if (opcao == 'a'){
  result = numero1 + numero2;
  printf("O resultado é: %d",result);
}
else if (opcao == 'd'){
  result = numero1 / numero2;
  printf("O resultado é: %d",result);
}
else if (opcao == 'c'){
  result = numero1 * numero2;
  printf("O resultado é: %d",result);
}
else {
 printf("Opção invalida");
}

return 0 ;
}
