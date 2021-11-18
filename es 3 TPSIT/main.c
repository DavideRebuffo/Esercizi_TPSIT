#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void caricaStringa(char frase[], char s[]){
printf("%s", frase);
    fflush(stdin);
    gets(s);
}
void stampaStringhe(char s[], char s1[]){
printf("stringa inserita: %s\n", s);
printf("stringa invertita: %s\n", s1);
}

bool isPalindromo(char s[]) {
    int n = strlen(s);
    char s1[n];
    bool ok = false;
    int j = n - 1;
    int k = 0;

    while(k < n) {
        *(s1+k) = *(s+j);
        j--;
        k++;

    }
    stampaStringhe(s,s1);

    if(strcmp(s1,s) == 0) {
        ok = true;
    }
    return ok;
}


int main(){

    int n = 256;

    char *stringa = (char*)malloc(n*sizeof(char));

    caricaStringa("scrivi qualcosa.... ", stringa);

    if(isPalindromo(stringa)){ //confronto il valore di ritorno di isPalondromo
    printf("la stringa e' palindroma\n");
    }else{
    printf("la stringa non e' palindroma\n");
    }

t
    printf("\n");
    system("PAUSE");
    return 0;
}
