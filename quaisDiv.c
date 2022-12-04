/*
Arquivo: quaisdiv.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 03/12/2022
*/
#include <stdio.h>
void id(int * l, int len, int ref);

int main(void) {
    int N, ref;
    printf("Quantos elementos? ");
    scanf("%d", &N);
    int l[N]; // C99 only!! variable length array
    for(int i = 0; i < N; i++) {
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", l+i);
    }
    printf("Escolha o número de referência: ");
    scanf("%d", &ref);
    id(l, N, ref);
    return 0;
}

void id(int * l, int len, int ref) {
    for(int i = 0; i < len; i++) {
        printf("%d", l[i]);
        if(ref % l[i] == 0)
            printf("#");
        printf(" ");
    }
    printf("\n");
}