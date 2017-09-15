#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

tNode *newNodeQueue(){

    tNode *nNode = (tNode*)malloc(sizeof(tNode));
    nNode->key = NULL;
    nNode->type = NULL;
    
    //    void *nodePointer = nNode;
    
    return nNode;
}
