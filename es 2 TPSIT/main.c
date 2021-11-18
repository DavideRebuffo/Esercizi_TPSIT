#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

typedef struct {
    char num[DIM];
    char titFilm[DIM];
    char genere[DIM];
    char annoUscita[DIM];
    char dispo[DIM];
} Cinema; //dichiarazione della struttura di stringhe


int contaRigheFile(char nomeFile[]) {
    FILE *fp;
    int k;
    int conta = 0;
    char stringa[DIM];

    fp = fopen (nomeFile, "r");
    if(fp == NULL) {
        printf("IL FILE NON ESISTE\n");
    } else {
        while(fgets(stringa, DIM, fp)) {
            conta++;
        }
    }
    fclose(fp);
    return conta;
}


void caricaVett(Cinema v[], int n, char nomeFilm[]) {
    FILE *fp;
    int c=0;
    char line[100];
    int i;

    fp = fopen(nomeFilm, "r"); // apro il file

    for(i = 0; i < n; i++) {
        fgets(line, 100, fp);
        char* pezzo = strtok(line, ",");

        while(pezzo != NULL) {
            switch(c) { //switch case con c (contatore)
            case 0:
                strcpy((*(v+i)).num, pezzo); //copio il pezzo di stringa letto nel campo della struttura adeguato
                break;
            case 1:
                strcpy((*(v+i)).titFilm, pezzo);
                break;
            case 2:
                strcpy((*(v+i)).genere, pezzo);
                break;
            case 3:
                strcpy((*(v+i)).annoUscita, pezzo);
                break;
            case 4:
                strcpy((*(v+i)).dispo, pezzo);
                break;
            }
            c++; // incremento contatore
            pezzo = strtok(NULL, ",");
        }
        c=0;
    }
    fclose(fp); //chiudo il file
}

void stampVett(Cinema v[], int n) {
    for(int k = 0; k < n; k++) {
        printf("%s\t%s\t%s\t%s\t%s", (*(v+k)).num, (*(v+k)).titFilm, (*(v+k)).genere, (*(v+k)).annoUscita, (*(v+k)).dispo);
    }
}

int main() {

    Cinema *film;
    int conta;

    conta = contaRigheFile("listafilm.csv");  //conto quante righe ci sono nel file csv

    film = (Cinema*) malloc (conta*sizeof(Cinema)); //allocazione dinamica

    caricaVett(film,conta, "listafilm.csv"); //carico la struttura prendendo le informazioni dal file csv

    stampVett(film,conta); //stampo la matrice caricata in precedenza

    free(film);
    return 0;
}
