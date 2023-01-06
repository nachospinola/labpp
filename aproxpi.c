/*
Arquivo: aproxpi.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 05/01/2023
*/
#include <math.h>
#include <stdio.h>
double S(int n);
int main(void){
    double x;
    int n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    printf("******* %lf\n", 5.6);
    x = S(n);
    printf("******* %lf\n", x);
    return 0;
}
double S(int n){
    if(n==0){
        return 4.0;
    }
    return (S(n-1)+(4*((pow(-1,n))/((2*n)+1))));
    
}