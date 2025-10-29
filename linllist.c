#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    Node *head = NULL, *n1, *n2, *n3, *n4, *n5;


    n1 = (Node*)malloc(sizeof(Node));
    n2 = (Node*)malloc(sizeof(Node));
    n3 = (Node*)malloc(sizeof(Node));
    n4 = (Node*)malloc(sizeof(Node));
    n5 = (Node*)malloc(sizeof(Node));

    
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;


    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    
    head = n1;

   
    printf("Linked List Elements: ");
    Node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);

    return 0;
}

