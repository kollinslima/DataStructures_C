#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

tNode *newNode(){

    tNode *nNode = (tNode*)malloc(sizeof(tNode));
    nNode->key = NULL;
    nNode->type = NULL;
//    void *nodePointer = nNode;
    
    return nNode;
}
