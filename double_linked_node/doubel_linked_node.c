#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node *head, *tail;


int index_node(int order){
    Node* node = head -> next;
    for(int i = 0; i < order - 1; i++){
        node = node -> next;
    }
    return node -> data;
}



void insert(int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node* cur;
    cur = tail -> prev;

    cur -> next = node;
    node -> prev = cur;

    node -> next = tail;
    tail -> prev = node;
}
void delete(int order){
    Node* node = head -> next;
    for(int i = 0; i < order - 1; i++){
        node = node -> next;
    }
    node -> prev -> next = node -> next;
    node -> next -> prev = node -> prev;

    free(node);
}




void show(){
    Node* cur = head -> next;
    while(cur != tail){
        printf("%d ", cur -> data);
        cur = cur -> next;
    }
}



int main(void){
    head = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));

    head->next = tail;
    head->prev = head;

    tail->next = tail;
    tail->prev = head;

    insert(1);
    insert(3);
    insert(100);


    delete(2);

    printf("%d\n", index_node(1));
    
    show();

    
}