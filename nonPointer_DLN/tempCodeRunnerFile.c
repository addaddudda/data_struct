
void show(void){
    printf("[%d %d %d] ", head.prev ,head.data ,head.next);
    for(int i = 0; i < sizeof(node) / sizeof(Node); i++){
        printf("[%d %d %d] ", node[i].prev, node[i].data, node[i].next);
    }
    printf("[%d %d %d] ", tail.prev, tail.data, tail.next);
}