#include <stdio.h>
#include <stdlib.h>

int chiediDim(char frase[]) {
    int dim;
    do {
        printf("%s", frase);
        scanf("%d", &dim);
    } while(dim < 0);
    return dim;
}

void caricaVettore(float *vett, int n) {
    for(int k = 0; k < n; k++) {
        printf("inserisci numero in posizione [%d]: ", k);
        scanf("%f", vett+k);
    }
    printf("\n");
}

float trovaUgualiSomma(float *vett, int n) {
    float somma = 0;
    int tro = -1;
    for(int k = 0; k < n; k++) {
        for(int j = 0; j < n; j++) {
            if(*(vett+k) == *(vett+j) && (j != k)) {
                printf("trovato %.2f in posizione %d\n",*(vett+k),k);
                tro = k;
            }
        }
        if(tro == -1) {
            somma = somma + *(vett+k);
        }
        tro = -1;
    }
    return somma;
}

int main() {

    int n;
    float somma;

    n = chiediDim("inserisci la dimensione del vettore: ");

    float *vett = (float*)malloc(n*sizeof(float)); //creo il vettore usando la malloc

    caricaVettore(vett,n);

    somma = trovaUgualiSomma(vett,n); //trova le celle del vettore uguali e ritorna la somma

    printf("la somma e' di %.2f\n", somma);

    printf("\n");
    system("PAUSE");
    return 0;
}
