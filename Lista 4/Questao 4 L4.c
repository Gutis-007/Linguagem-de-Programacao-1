
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int Velocidade,VelocidadeMax,VelocidadeLimite;
    printf("Informe a Velocidade do veiculo e a Velocidade Maxima da via");
    scanf("%d%d",&Velocidade,&VelocidadeMax);
    VelocidadeLimite = VelocidadeMax*1.2;
    if (Velocidade<=VelocidadeMax){
        printf("voce não tomou multa");
    }
    else if(Velocidade>=VelocidadeMax && Velocidade<=VelocidadeLimite){
        printf("Você deve pagar de multa R$250");
    }
    else{
        printf("Você deve pagar de multa R$750");
    }
    
    return 0;
}
