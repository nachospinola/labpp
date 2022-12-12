/*
Arquivo: cosTaylor.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 04/11/2022
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <inttypes.h>
#ifdef M_PI
    #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875
int fat(int i);


int main(void){
    int n, i;
    double x, cost=0;
    printf("Digite os valores: ");
    scanf("%d", &n);
    scanf("%lf", &x);
    x=x*M_PI;
    for(i=0;i<=n;i++){
        cost=cost+(pow(-1,i)*pow(x,2*i))/fat(i);
    }
    printf("%0.5lf", cost);
    return 0;
}
int fat(int i){
    int g=2*i, y=1, res=1;
    while(y<=g){
        res=res*y;
        y++;
    }
    return res;
}



