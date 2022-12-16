/*
Arquivo: palindrono.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/

#include <string.h>
#include <stdio.h>
#define N 1024

int getstr(char * str, int nchar);
void upper(char * str);
void inverser(char * str, int nchar, int j);

int main(void){
    char txt[N];
    printf("Entre com um texto: ");
    int j = getstr(txt, N);
    upper(txt);
    inverser(txt, N, j);
    return 0;
}

int getstr(char * str, int nchar) {
    char c;  int i;
    int j=0;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
            j++;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return j; 
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}

void inverser(char * str, int nchar, int j){
   int x,y,z;
   y=1;
   for(int K = 0; K<j; K++){
    if((str[K]>='A')&&(str[K]<= 'Z')){
        y++;
    }
   }
   char s1[nchar];
   char s2[nchar];
   for(int K=0; K<nchar;K++){
    s1[K]='\0';
    s2[K]='\0';
   }
   for(int K=0,z=0;K<j;K++,z++){
    if((str[K]>='A')&&(str[K]<='Z')){
        s1[z]=str[K];
        if(strlen(s1)==y){
            break;
        }
    }
    else{
        z--;
    }
   }
   for(int i=strlen(s1)-1,x=0;i>=0;i--,x++){
    s2[x]=s1[i];
   }
   int a=0;
   for(int i = 0;i<y;i++){
    if(s2[1]!=s1[i]){
        printf("Palindrono: Falso\n");
        a=1;
        break;
    }
   }
   if(a==0){
    printf("Palindrono: Verdadeiro");
   }
}
