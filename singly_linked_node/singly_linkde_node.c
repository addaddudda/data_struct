#include<stdio.h>
#include<stdlib.h>
#include "singly_linked_node.h"


typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head, *tail;






int main(void){
    tail = (Node*)malloc(sizeof(Node));
    tail -> next = NULL;
    
    head = (Node*)malloc(sizeof(Node));
    head -> next = tail;

    insert(1);
    insert(3);
    insert(100);

    delete(2);


    show();

    return 0;
}