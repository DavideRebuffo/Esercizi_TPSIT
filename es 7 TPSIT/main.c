#include <stdio.h>
#include <stdlib.h>
#define DIM 40

int chiediDim(char frase[]) {
    int dim;
    printf("%s", frase);
    scanf("%d", &dim);
    return dim;
}

void azzeraMatrice(float **mat, int nR, int nC) {
    for(int r = 0; r < nR; r++) {
        for(int c = 0; c < nC; c++) {
            mat[r][c] = 0;
        }
    }
}
void inserisciNumeri(float **mat, int nR, int nC) {
    int x,y;
    float num;
        do {
            printf("inserisci una x: ");
            scanf("%d", &x);
        } while(x < 0 && x > nR-1);
        do {
            printf("inserisci una y: ");
            scanf("%d", &y);
        } while(y < 0 && y > nC-1);

        printf("inserisci un valore in questa cella: ");
        scanf("%f", &num);
        mat[x][y] = num;
}


void stampaMatrice(float **mat, int nR, int nC) {
    for(int r = 0; r < nR; r++) {
        for(int c = 0; c < nC; c++) {
            printf("%.2f ", mat[r][c]);
        }
        printf("\n");
    }

}


int main() {

    int nR, nC, numm;

    nR = chiediDim("inserisci il numero di righe: ");
    nC = chiediDim("inserisci il numero di colonne: ");

    float **mat = (float**)malloc(nR*sizeof(float));
    for(int i = 0; i < nR; i++) {
        mat[i] = (float*)malloc(nC*sizeof(float));
    }

    azzeraMatrice(mat, nR, nC);

    printf("quanti numeri vuoi inserire?: ");
    scanf("%d", &numm);
    for(int k = 0;k < numm;k++){
    inserisciNumeri(mat, nR, nC);
    }

    stampaMatrice(mat,nR,nC);




    printf("\n");
    system("PAUSE");
    return 0;
}
