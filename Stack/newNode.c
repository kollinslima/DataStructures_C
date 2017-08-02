#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void *newNode(){

    Node *nNode = (Node*)malloc(sizeof(Node));

    void *nodePointer = nNode;
    
    return nodePointer;
}
