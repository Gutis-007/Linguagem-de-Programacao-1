//Faça um programa que leia o peso e a altura do usuário e informa se o mesmo está obeso. 
//Lembre-se que para saber se uma pessoa está obesa deve-se utilizar a formula:imc =
//peso/altura2. Caso o resultado do imc seja maior que 30 o usuário está obeso. 

#include <stdio.h>
int main(){

float peso,altura,imc;
printf("Digite o seu Peso e sua Altura: ");
scanf("%f%f",&peso,&altura);
imc = peso/(altura*altura);
if (imc>30){
    printf("Você esta Obeso");
}
else{
    printf("Você não esta Obeso");
}

return 0;


}