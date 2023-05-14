//Os valores devem ser operados de acordo com a operação informada (soma,
//subtração, multiplicação e divisão) e o algoritmo deve imprimir o resultado da operação.
#include <stdio.h>

int main(void) {

float numero1,numero2;
int result;
char opcao;
  
printf("Digite os numero a serem utilizados na conta");
scanf("%f%f",&numero1,&numero2);
printf("Digite o operador a ser utilizado");
scanf("%s",&opcao);
if (opcao == '-'){
  result = numero1 - numero2;
}
else if (opcao == '+'){
  result = numero1 + numero2;
}
else if (opcao == '/'){
  result = numero1 / numero2;
}
else {
  result = numero1 * numero2;
}
printf("O resultado é: %d",result);
return 0 ;
}
