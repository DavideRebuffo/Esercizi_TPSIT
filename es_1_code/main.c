#include <stdio.h>
#include <stdlib.h>

typedef struct s_queue_node {
    int elemento;
    struct s_queue_node*next;

} Queue_node;

int is_empty(Queue_node*head);
void enqueue(Queue_node**head, Queue_node**tail,Queue_node*elemento);
Queue_node*dequeue(Queue_node**head,Queue_node**tail);

int main() {

    Queue_node*head = NULL; //imposto head,tail a NULL
    Queue_node*tail = NULL;
    Queue_node*struct_rerurn = NULL;
    Queue_node*element;
    bool condizione = true;
    int dato;

    while(condizione){
        printf("MENU'\n\n-scegli '1' per inserire elementi nella coda\n-scegli '2' per svuotare la coda\n-scegli '3' per uscire dal programma\n\n");
        do{
            printf("inserisci la tua scelta: ");
            scanf("%d",%scelta);
        }while(scelta < 0 || scelta > 3);

        switch(scelta){ //switch case in base alla scelta
    case 1:
        printf("inserire elemento: ");
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
