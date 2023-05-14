//Escreva um programa que leia o peso do cachorro em quilos e o peso da embalagem
//de ração em quilos, e calcule e imprima a quantidade de dias que o pacote de ração irá
//durar. A tabela abaixo indica a porção diária de acordo com a faixa de peso do cachorro:
//Peso do cachorro em Kg Porções diárias
//Até 5 Kg 60g
//6 – 10 Kg 95g
//11 – 15 Kg 135g
//16 – 20 Kg 170g
//Acima de 21 Kg 215g

#include<stdio.h>

int main()
{
    int Racao,Peso,RacaoD;
    printf("Digite o peso do cachorro e o peso da racao em Kilos");
    scanf("%d%d",&Peso,&Racao);
    Racao = Racao*1000;
    if(Peso<=5){
        RacaoD = Racao/60;
    }
    else if (Peso>5 && Peso<=10){
        RacaoD = Racao/95;
    }
    else if (Peso>10 && Peso<=15){
        RacaoD = Racao/135;
    }
    else if (Peso>15 && Peso<=20){
        RacaoD = Racao/170;
    }
    else{
        RacaoD = Racao/215;
    }
    
    printf("O tanto de dias que a ração ira durar é de %d",RacaoD);
    return 0;
}
