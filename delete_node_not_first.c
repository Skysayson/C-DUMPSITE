#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    char data;
    struct node *link;

}*list;

int main() {
    
    list head;
    list temp;
    list *p;
    list temp2;

    head = malloc(sizeof(struct node));
    head -> data = 'H';
    head -> link = malloc(sizeof(struct node));

    head -> link -> data = 'O';
    head -> link -> link = malloc(sizeof(struct node));

    head -> link -> link -> data = 'P';
    head -> link -> link -> link = malloc(sizeof(struct node));

    head -> link -> link -> link -> data = 'E';
    head -> link -> link -> link -> link = NULL;

    // REMOVAL OF NODE
    p = &head -> link -> link;
    temp = *(p);
    head -> link -> link = head -> link -> link -> link;
    free(temp);


    // DISPLAY REMANING NODES
    printf("After removal of node: ");
    for(temp2 = head; temp != NULL ; temp2 = temp2 -> link) {
        printf("%c", temp2 -> data);
    }

}