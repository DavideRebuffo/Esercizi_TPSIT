#include <stdio.h>
#include <stdlib.h>
#define DIM 20

int chiediDim(char frase[]){
int dim;
printf("%s", frase);
scanf("%d", &dim);
return dim;
}
void carica(char *s, int *v,int dim){
    for(int k = 0;k < dim;k++){
    printf("inserisci valore intero in posizione [%d]: ", k);
    scanf("%d", v+k);
    }
    printf("inserisci una stringa: ");
    gets(s);
}
void stampa(char *s, int *v, int dim){
    printf("valori: ");
    for(int k = 0;k < dim;k++){
        printf("%d ", *v+k);
    }
    printf("indirizzi: ");
    for(int k = 0;k < DIM;k++){
        printf("%d ", v+k);
    }
    printf("valore: %s", *s);
    printf("indirizzi: %s", s);

}

int main(){

    char *c;
    char *i;

    char car;
    int in;

    c = &car;
    i = &in;

    car = 'e';
    in = 3;

    printf("%c %c\n", c, *c);
    printf("%d %d", i, *i);



    printf("\n");
    system("PAUSE");
    return 0;
}
