#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

Node *newNode(){

    Node *nNode = (Node*)malloc(sizeof(Node));
    nNode->key = NULL;
    nNode->type = NULL;
//    void *nodePointer = nNode;
    
    return nNode;
}
