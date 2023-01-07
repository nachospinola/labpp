/*
Arquivo: racionais.c
Nome: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 06/01/2023
*/
#include <stdio.h>
typedef
    struct Racional{
        int numerador, denominador;
    }
Racional;

int mdc(int a, int b);
int mod(int a);
int main(void){
    Racional Q;
    Racional P;
    Racional Soma;
    Racional Sub;
    Racional Mult;
    Racional Div;
    int c;
    printf("Digite os valores para o numero racional:\n");
    scanf("%d %d %d %d", &Q.numerador, &Q.denominador, &P.numerador, &P.denominador);
    if((Q.denominador)<0){
        Q.denominador=Q.denominador*(-1);
        Q.numerador=Q.numerador*(-1);
    }
    //passei o sinal do denominador caso seja negativo, acima e abaixo
    if((P.denominador)<0){
        P.denominador=P.denominador*(-1);
        P.numerador=P.numerador*(-1);
    }
    c=Q.numerador; //segura o valor do denominador para simplificar
    Q.numerador=Q.numerador/mdc(mod(Q.numerador),mod(Q.denominador));
    Q.denominador=Q.denominador/mdc(mod(c),mod(Q.denominador));
    //simplifiquei Q
    c=P.numerador;
    P.numerador=P.numerador/mdc(mod(P.numerador),P.denominador);
    P.denominador=P.denominador/mdc(mod(c),P.denominador);
    //simplifiquei P
    Soma.numerador=((Q.numerador)*(P.denominador))+((P.numerador)*(Q.denominador));
    Soma.denominador=(Q.denominador)*(P.denominador);
    //Acima Somei
    Sub.numerador=((Q.numerador)*(P.denominador))-((P.numerador)*(Q.denominador));
    Sub.denominador=(Q.denominador)*(P.denominador);
    //Acima subtrai
    Mult.numerador=(Q.numerador)*(P.numerador);
    Mult.denominador=(Q.denominador)*(P.denominador);
    //Acima multipliquei
    Div.numerador=(Q.numerador)*(P.denominador);
    Div.denominador=(Q.denominador)*(P.numerador);
    //Acima Dividi
    c=Soma.numerador;
    Soma.numerador=Soma.numerador/mdc(mod(Soma.numerador),Soma.denominador);
    Soma.denominador=Soma.denominador/mdc(mod(c),Soma.denominador);
    //simplifiquei a soma.
    c=Sub.numerador;
    Sub.numerador=Sub.numerador/mdc(mod(Sub.numerador),Sub.denominador);
    Sub.denominador=Sub.denominador/mdc(mod(c),Sub.denominador);
    //simplifiquei a subtração
    c=Mult.numerador;
    Mult.numerador=Mult.numerador/mdc(mod(Mult.numerador),Mult.denominador);
    Mult.denominador=Mult.denominador/mdc(mod(c),Mult.denominador);
    //simplifiquei a multiplicação
    c=Div.numerador;
    Div.numerador=Div.numerador/mdc(mod(Div.numerador),mod(Div.denominador));
    Div.denominador=Div.denominador/mdc(mod(c),mod(Div.denominador));
    //simplifiquei a divisão
    if(Div.denominador<0){
        Div.denominador=Div.denominador*(-1);
        Div.numerador=Div.numerador*(-1);
    }
    printf("%d/%d %d/%d %d/%d %d/%d %d/%d %d/%d", 
    Q.numerador, Q.denominador, P.numerador, P.denominador,
    Soma.numerador, Soma.denominador, Sub.numerador, Sub.denominador,
    Mult.numerador, Mult.denominador, Div.numerador, Div.denominador);
    return 0;
}

int mdc(int a, int b){
    if(b==0){
        return a;
    }
    else{
        mdc(b,(a%b));
    }
}
int mod(int a){
    if(a<0){
        return (a*(-1));
    }
    else{
        return a;
    }
}
