/*
Arquivo: remNegativos.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 03/12/2022
*/
#include <stdio.h>
int main(void){
    int galo=0;
    int N;
    printf("Quantos elementos: ");
    scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for(int j=0; j<N; j++){
        if(array[j]>=0){
            printf("%d ", array[j]);
        }
        else{
            galo++;
        }
    }
    if(galo==N){
        printf("A lista é vazia!");
    }
    return 0;
}