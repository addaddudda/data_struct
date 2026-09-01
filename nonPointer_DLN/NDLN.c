#include<stdio.h>
#include"NDLN.h"

Node node[5];

Node head, tail;
int index_max = 0;


void show(void){
    printf("[%d %d %d] ", head.prev ,head.data ,head.next);
    for(int i = 0; i < sizeof(node) / sizeof(Node); i++){
        printf("[%d %d %d] ", node[i].prev, node[i].data, node[i].next);
    }
    printf("[%d %d %d] ", tail.prev, tail.data, tail.next);
}

void insert(){
    int data, order;
    scanf("%d %d", &data, &order);
    order--;
    node[order].data = data;
    
    if(head.next == -1 && tail.prev== -1){
        head.next = order;
        index_max = order;
    }else if(order > index_max){
        node[index_max].next = order;
        node[order].prev = index_max;
        index_max = order;
    }
    show();
}




int main(void){
    head.prev = -1;
    head.next = -1;

    tail.prev = -1;
    tail.next = -1;

    for(int i = 0; i < sizeof(node) / sizeof(Node); i++){
        node[i].next = -1;
        node[i].prev = -1;
    }
    insert();
    insert();


}
