/*
Arquivo: dist.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
#include <math.h>
int main(void){
    double Xa;
    double Xb;
    double Ya;
    double Yb;
    double som;
    printf("digite os numeros:\n");
    scanf("%lf %lf %lf %lf", &Xa, &Ya, &Xb, &Yb);
    som = sqrt(pow((Xa-Xb),2)+pow((Ya-Yb),2));
    printf("%g", som);
    return 0;


}