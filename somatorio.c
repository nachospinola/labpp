/*
Arquivo: somatorio.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 03/12/2022
*/
#include <stdio.h>
float sum(float * array, int len);

int main(void) {
    int N;
    printf("Quantos elementos? ");
    scanf("%d", &N);
    float array[N]; // específico do C99
    for(int i = 0; i < N; i++) {
        printf("Informe elemento %d:\n", i+1);
        scanf("%f", array + i);
    }
    printf("%g ", array[0]);
    for(int i = 1; i < N; i++)
        printf("+ %g ", array[i]);
    printf("= %g\n", soma(array, N));
    return 0;
}

float sum(float * array, int len) {
    float s = 0;
    for(int i = 0; i < len; i++) 
        s += array[i];
    return s;
}