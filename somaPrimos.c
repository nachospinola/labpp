/*
Arquivo: somaPrimos.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int main(void){
    int a,b,i,aux,j,soma=0;
    printf("Digite o intervalo\n");
    scanf("%d %d", &a, &b);
    for(int i=a+1;i<b;i++){
        aux=1;
        for(j=2;j<i;j++){
            if((i%j)==0){
                aux=0;
            }
        }
    if(aux==1){
        soma=soma+i;
    }
    }
    printf("%d", soma);
    return 0;
}