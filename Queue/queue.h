#ifndef _queue_h
#define _queue_h

typedef struct node{
    void *key;
    char *type;
    struct node *next;
}tNode;

typedef struct{
    tNode *front;
    tNode *back;
}tSimpleLinkedList;

//********************SIMPLE LINKED LIST***************************//

int freeSimpleLinkedList(tSimpleLinkedList **queue);

int isEmpty(tSimpleLinkedList *queue);

tNode *newNode();

tSimpleLinkedList *newSimpleLinkedList();

void *popSimpleLinkedList(tSimpleLinkedList *queue);

int pushSimpleLinkedList(tSimpleLinkedList *queue, tNode *node, char *type);

int printSimpleLinkedList(const tSimpleLinkedList *queue, void (*printKey)(tNode *node));

#endif
