/*
Arquivo: cadastro.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 06/01/2023
*/
#include<stdio.h>
typedef
    struct Nome{
        char nome[20];
        char sobrenome[20];
    }
Nome;
typedef
    struct Data{
        int dia,mes,ano;
    }
Data;
typedef
    struct Altura{
        int metro,cm;
    }
Altura;
typedef
    struct Peso{
        float kg;
    }
Peso;
const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};
int cm(int x);
int main(void){
    Nome nome;
    Data data;
    Altura altura;
    Peso peso;
    printf("Digite seu nome, data de nascimento e.g DD/MM/YY, altura e peso:\n");
    scanf("%s %s %d/%d/%d %d.%d %f", &nome.nome, &nome.sobrenome, &data.dia, &data.mes,
    &data.ano, &altura.metro, &altura.cm, &peso.kg );
    altura.cm = cm(altura.cm);
    printf("%s %s; ",nome.nome, nome.sobrenome);
    printf("%02d%s%04d; ", data.dia, strmes[data.mes], data.ano);
    printf("Altura %dm%d; ", altura.metro, altura.cm);
    printf("%0.1fkg", peso.kg);
    return 0;
}
int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}