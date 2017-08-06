#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

SimpleLinkedList *newSimpleLinkedList(){

    SimpleLinkedList *nSLL = (SimpleLinkedList*)malloc(sizeof(SimpleLinkedList));
    nSLL->front = NULL;
    nSLL->back = NULL;

//    void *sllPointer = nSLL;
    
    return nSLL;
}
