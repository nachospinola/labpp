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
    Q.numerador=Q.numerador/mdc(mod(Q.numerador),Q.denominador);
    Q.denominador=Q.denominador/mdc(mod(Q.numerador),Q.denominador);
    //simplifiquei Q
    P.numerador=P.numerador/mdc(mod(P.numerador),P.denominador);
    P.denominador=P.denominador/mdc(mod(P.numerador),P.denominador);
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
    Soma.numerador=Soma.numerador/mdc(mod(Soma.numerador),Soma.denominador);
    Soma.denominador=Soma.denominador/mdc(mod(Soma.numerador),Soma.denominador);
    //simplifiquei a soma.
    Sub.numerador=Sub.numerador/mdc(mod(Sub.numerador),Sub.denominador);
    Sub.denominador=Sub.denominador/mdc(mod(Sub.numerador),Sub.denominador);
    //simplifiquei a subtração
    Mult.numerador=Mult.numerador/mdc(mod(Mult.numerador),Mult.denominador);
    Mult.denominador=Mult.denominador/mdc(mod(Mult.numerador),Mult.denominador);
    //simplifiquei a multiplicação
    Div.numerador=Div.numerador/mdc(mod(Div.numerador),mod(Div.denominador));
    Div.denominador=Div.denominador/mdc(mod(Div.numerador),mod(Div.denominador));
    //simplifiquei a divisão
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