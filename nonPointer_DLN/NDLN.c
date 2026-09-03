#include<stdio.h>
#include"NDLN.h"

Node node[5];

Node head, tail;
int last_index = 0;


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
        last_index = order;
    }else if(order > last_index){
        node[last_index].next = order;
        node[order].prev = last_index;
        last_index = order;
    }else if(order < last_index){
        node[last_index].prev = order;
        node[order].next = last_index;
        last_index = order;
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
