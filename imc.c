/*
Arquivo: imc.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 04/11/2022
*/
#include <stdio.h>
int main(void){
    float imc, peso, altura;
    printf("Digite seu peso: \n");
    scanf("%f", &peso);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    imc=peso/(altura*altura);
    if(imc<16){
        printf("%.2f (Perigo de vida)", imc);
    }
    if(imc>=16 && imc<17){
        printf("%.2f (Muito abaixo do peso)", imc);
    }
    if(imc>=17 && imc<18.5){
        printf("%.2f (Abaixo do peso)", imc);
    }
    if(imc>=18.5 && imc<25){
        printf("%.2f (Peso normal)", imc);
    }
    if(imc>=30 && imc<35){
        printf("%.2f (Obesidade grau I)", imc);
    }
    if(imc>=35 && imc<40){
        printf("%.2f (Obesidade grau II)", imc);
    }
    if(imc>=40){
        printf("%.2f (Obesidade grau III)", imc);
    }
    return 0;
}