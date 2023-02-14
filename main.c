#include <stdio.h>
#include <stdlib.>

typedef struct _node{
    int value;
    struct _node *next;
}node
node *head = null;

void insert(int val){
    node *n = (node*) malloc (sizeof(node));
    n->value = val;
    n->next = head;
    head = n;
}

void printlink(){
    node *ptr = head;
    while(ptr != null){
        printf("val - %d\n"m ptr->value);
        ptr = ptr->next;
    }
}
void main(){
    insert(4);
    insert(6);
    printlink();
}