#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

tNode *newNodeStack(){

    tNode *nNode = (tNode*)malloc(sizeof(tNode));
    nNode->key = NULL;
    nNode->type = NULL;
    
//    void *nodePointer = ntNode;
    
    return nNode;
}
