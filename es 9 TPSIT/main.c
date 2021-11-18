#include <stdio.h>
#include <stdlib.h>

int chiediDim(char frase[]){
int dim;
printf("%s", frase);
scanf("%d", &dim);
return dim;
}

int creaMatrice(int nR, int nC){
int **mat = (int**)malloc(nR*sizeof(int));
    for(int i = 0; i < nR; i++) {
        mat[i] = (int*)malloc(nC*sizeof(int));
    }
    return mat;
}


void azzeraMatrice(int **mat, int nR, int nC){
for(int r = 0;r < nR;r++){
    for(int c = 0;c < nC;c++){
        mat[r][c] = 0;
    }
}
}

void stampaMatrice(int **mat, int nR, int nC){
  for(int r = 0; r < nR; r++) {
        for(int c = 0; c < nC; c++) {
            printf("%d ", mat[r][c]);
        }
        printf("\n");
    }
}

int main(){

    int nR, nC;

    nR = chiediDim("inserisci il numero di righe: ");
    nC = chiediDim("inserisci il numero di colonne: ");

    int **mat = creaMatrice(nR,nC);

    azzeraMatrice(mat,nR,nC);

    stampaMatrice(mat, nR,nC);

    free(mat);

    printf("\n");
    system("PAUSE");
    return 0;
}
