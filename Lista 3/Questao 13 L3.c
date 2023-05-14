#include <stdio.h>

int main(void) {


int Idade;
  
printf("Digite a Idade do Nadador");
scanf("%d",&Idade);


if (Idade>= 5 && Idade<= 7){
  printf("Categoria Infantil A");
}
else if (Idade>= 7 && Idade<= 10){
  printf("Categoria Infantil B");
}
else if (Idade>= 10 && Idade<= 13){
  printf("Categoria Juvenil A");
}
else if (Idade>= 13 && Idade<= 17){
  printf("Categoria Juvenil B");
}
else {
  printf("Categoria Adulta");
}

return 0 ;
}