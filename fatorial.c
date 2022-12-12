/*
Arquivo: fatorial.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 04/11/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
int main(void){
    int64_t c=1;
    int64_t a;
    printf("Digite o valor que queira saber o fatorial: ");
    scanf("%lld", &a);
    while(a>1){
        c=c*a;
        a--;
    }
    printf("%lld\n", c);
    return 0;
}
