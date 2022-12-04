/*
Arquivo: minMax.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 03/12/2022
*/
#include <stdio.h>
void minMax(int * array, int len);
int main(void){
    int N;
    printf("Quantos elementos?\n");
    scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }
    minMax(array,N);
    return 0;
}
void minMax(int * array, int len){
    int f=array[0];
    int e=array[0];
    for(int j=0; j<len; j++){
        if(f>array[j]){
            f=array[j];
        }
        if(e<array[j]){
            e=array[j];
        }
    }
    for(int k=0; k<len; k++){
        if(array[k]==e){
            printf("%d> ", array[k]);
        }
        else if(array[k]==f){
            printf("%d< ", array[k]);
        }
        else{
            printf("%d ", array[k]);
        }
    }
}