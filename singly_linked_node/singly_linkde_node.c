#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* head, *tail;

void insert(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node -> data = data;
    Node* cur = head -> next;
    if(head -> next == tail){
        head -> next = node;
        node -> next = tail;
        return;
    }
    
    while(cur -> next != tail){
        cur = cur -> next;
    }
    

    node -> next = tail;
    cur -> next = node;
}



void delete(int order){
    
}



void show(void){
    Node* cur = head -> next;
    while(cur -> next != NULL){
        printf("%d ", cur -> data);
        cur = cur -> next;
    }
}





int main(void){
    tail = (Node*)malloc(sizeof(Node));
    tail -> next = NULL;
    
    head = (Node*)malloc(sizeof(Node));
    head -> next = tail;

    insert(1);
    insert(3);
    insert(100);
    

    show();

    return 0;
}