#include <stdio.h>
#include <stdlib.h>
#define DIM 3
/*definire una struttura per memorizzare i dati degli stidenti di una classe dei voti nelle varie discipline italiano, matematica e informatica
si scriva una funzione in C che a partire da un vettore di studenti fornito come argomento, determini la disciplina che ha la media piu alta.*/
typedef struct{
float italiano;
float matematica;
float informatica;
}Voti;

void caricaVoti(Voti v[], int n){
int k;
for(k = 0; k < n;k++){

    printf("inserisci voto italiano [%d]: ", k);
    fflush(stdin);
    scanf("%f", &v[k].italiano);

    printf("inserisci voto matematica [%d]: ", k);
    fflush(stdin);
    scanf("%f", &v[k].matematica);

    printf("inserisci voto informatica [%d]: ", k);
    fflush(stdin);
    scanf("%f", &v[k].informatica);

}
}

void mediaAlta(Voti v[], int n){

int k;
float mediaIta, mediaMate, mediaInfo;
float somma1 = 0;
float somma2 = 0;
float somma3 = 0;


for(k = 0; k < n;k++){
        somma1 = somma1 + v[k].italiano;
        somma2 = somma2 + v[k].matematica;
        somma3 = somma3 + v[k].informatica;
}


mediaIta =(float) somma1 / n;
mediaMate =(float) somma2 / n;
mediaInfo =(float) somma3 / n;

printf("\nmedia voti mate: %.2f\nmedia voti info: %.2f\nmedia voti ita: %.2f", mediaMate, mediaInfo, mediaIta);

if(mediaIta > mediaMate){
    if(mediaIta > mediaInfo){
        printf("\nla media piu alta e' italiano");
    }else{
    printf("\nla media piu alta e' informatica");
    }
}else{
    if(mediaMate > mediaInfo){
        printf("\nla media piu alta e' matematica");
    }else{
    printf("\nla media piu alta e' informatica");
    }
}
}

int main(){

    Voti info[DIM];

    caricaVoti(info,DIM);

    mediaAlta(info, DIM);

    printf("\n");
    system("PAUSE");
    return 0;
}
