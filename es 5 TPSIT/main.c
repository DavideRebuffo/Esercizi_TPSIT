#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void caricaStringa(char frase[], char stringa[]){
printf("%s", frase);
gets(stringa);
}

bool trovaA(char stringa[]){
bool ok = false;
int k = 0;
while(k < 10 && ok == false){
    if(*(stringa+k) == 'A' || *(stringa+k) == 'a'){
        ok = true;
    }else{
    k++;
    }
}
return ok;
}

int main(){

    int n = 256;

    char *stringa = (char*) malloc(n*sizeof(char));


    caricaStringa("scrivi qualcosa... ", stringa);


    if(trovaA(stringa) == true){
        printf("trovata una A/a nei primi 10 caratteri della stringa\n");
    }else{
        printf("NON trovata una A/a nei primi 10 caratteri della stringa\n");
    }


    printf("\n");
    system("PAUSE");
    return 0;
}
