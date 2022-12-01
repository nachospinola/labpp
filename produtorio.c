/*
Arquivo: produtorio.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 01/12/2022
*/
#include <stdio.h>
int main(void){
    int N;
    float prod=1;
    printf("Digite a quantidade de valores:\n");
    scanf("%d", &N);
    float l[N+1];
    for(int i=0; i<N; i++){
        printf("Digite um numero:\n"); //for da lista
        scanf("%f", &l[i]);
    }
    for(int j=0; j<N; j++){
        prod=prod*l[j];    //for do produtorio    
    }
    l[N]=prod;
    for(int k=0; k<N-1; k++){ //for dos prints
        printf("%g * ", l[k]);
    }
    printf("%g = %g", l[N-1], l[N]);
    return 0;
}