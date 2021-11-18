#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caricaStringhe(char s1[], char s2[]){
printf("inserisci stringa1: ");
fflush(stdin);
gets(s1);
printf("inserisci stringa 2: ");
fflush(stdin);
gets(s2);
}

void unisciStrighe(char s1[], char s2[]){
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int j = 0;
for(int k = n1;k < n1+n2;k++){
    *(s1+k) = *(s2+j);
    j++;
}
}

void stampaStringa(char frase[], char s1[]){
    printf("%s", frase);
    printf("%s", s1);
}

int main(){

   int n = 256;

    char *s1 = (char*) malloc(n*sizeof(char));
    char *s2 = (char*) malloc(n*sizeof(char));

    caricaStringhe(s1,s2);  //creo 2 stringhe inserendole da tastiera

    unisciStrighe(s1,s2); //le unisco

    stampaStringa("stringhe unite: ", s1); //le stampo

    printf("\n");
    system("PAUSE");
    return 0;
}
