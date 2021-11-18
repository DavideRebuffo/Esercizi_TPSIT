#include <stdio.h>
#include <stdlib.h>
#define DIM 100
int chiediDim(char frase[]) {
    int dim;
    do {
        printf("%s", frase);
        scanf("%d", &dim);
    } while(dim < 0 || dim > DIM);
    return dim;
}

void caricaVettore(int v[], int n) {
    for(int k = 0; k < n; k++) {
        printf("inserisci numero nella cella [%d]: ", k);
        scanf("%d",v+k);
    }
}

void scambiaVettore(int v1[], int v2[], int n) {
    int j = n-1;
    for(int k = 0; k < n; k++) {
        *(v2+k) = *(v1+j);
        j--;
    }
}

void stampaVettori(int v1[], int v2[], int n) {
    printf("\nvettore inserito: ");
    for(int k = 0; k < n; k++) {
        printf("%d ", *(v1+k));
    }
    printf("\nvettore invertito: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", *(v2+j));
    }
}
int main() {

    int dim;
    dim = chiediDim("inserisci la dimensione del vettore: ");

    int *vett = (int*) malloc(dim*sizeof(int));
    int *vettInverso = (int*) malloc(dim*sizeof(int));


    caricaVettore(vett,dim);

    scambiaVettore(vett, vettInverso, dim);

    stampaVettori(vett, vettInverso, dim);

    printf("\n");
    system("PAUSE");
    return 0;
}
