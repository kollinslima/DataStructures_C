#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void *newNode(){

    Node *nNode = (Node*)malloc(sizeof(Node));
    nNode->type = NULL;
    void *nodePointer = nNode;
    
    return nodePointer;
}
