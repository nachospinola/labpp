/*
Arquivo: txtFibonacci.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/

#include <stdio.h>
#include <stdlib.h>

typedef
    long long unsigned int
lluint;

void fib(lluint * v, int n);

int main(void){
    int n;
    lluint * v;
    v=(lluint *) malloc(n * sizeof(lluint));
    printf("Quantos numeros da sequencia de fibonacci quer imprimir?:\n");
    scanf("%d%*c", &n);
    FILE * fibon;
    fibon=fopen("fibonacci.txt", "w");
    if(fibon == NULL){
        printf("Erro!");
        return 1;
    }
    else{
        for(int i=0;i<n;i++){
            fib(v,i);
            fprintf(fibon, "%llu\n", v[i]);
            if(i==(n-1)){
                printf("%llu\n", v[i]);
            }
        }
    }
    free(v);
    fclose(fibon);
    return 0;
}

void fib(lluint * v, int n){
    if(n==0){
        v[n]=0;
    }
    else if(n==1){
        v[n]=1;
    }
    else{
        v[n]=v[n-1]+v[n-2];
    }
}