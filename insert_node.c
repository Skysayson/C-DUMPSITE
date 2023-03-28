#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    char data;
    struct node *link;

}*list;

int main () {

    list head;
    list *p;
    list temp;
    list temp2;

    // Head
    head = malloc(sizeof(struct node));
    
    // Second node
    head -> data = 'H';
    head -> link = malloc(sizeof(struct node));

    // Third node
    head -> link -> data = 'O';
    head -> link -> link = malloc(sizeof(struct node));

    // Fourth node
    head -> link -> link -> data = 'P';
    head -> link -> link -> link = malloc(sizeof(struct node));

    // Fifth node
    head -> link -> link -> link -> data = 'E';
    head -> link -> link -> link -> link = NULL;

    // Insert node
    p = &head -> link -> link;
    temp = malloc(sizeof(struct node));

    if(sizeof(temp) == NULL) {
        printf("ERROR IN MEMORY ALLOCATION");
    }

    temp -> data = 'K';
    temp -> link = *(p);
    head -> link -> link = temp;

    for(temp2 = head; temp2 != NULL; temp2 = temp2 -> link) {
        printf("%c", temp2 -> data);
    }

    return 0;

}