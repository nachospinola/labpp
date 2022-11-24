/*
Arquivo: areaTriret.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int main(void){
    double xa, ya, xb, yb;
    printf("Digite os numeros:\n");
    scanf("%lf %lf %lf %lf", &xa, &ya, &xb, &yb);
    double xc=xb, yc=ya;
    double base=xc-xa;
    double altura=yb-yc;
    double area=(base*altura)/2;
    printf("%g", area);
    return 0;
}