#ifndef _queue_h
#define _queue_h

typedef struct node{
    void *key;
    char *type;
    struct node *next;
}Node;

typedef struct{
    Node *front;
    Node *back;
}SimpleLinkedList;

//********************SIMPLE LINKED LIST***************************//

int freeSimpleLinkedList(SimpleLinkedList **queue);

int isEmpty(SimpleLinkedList *queue);

Node *newNode();

SimpleLinkedList *newSimpleLinkedList();

void *popSimpleLinkedList(SimpleLinkedList *queue);

int pushSimpleLinkedList(SimpleLinkedList *queue, Node *node, char *type);

int printSimpleLinkedList(const SimpleLinkedList *queue, void (*printKey)(Node *node));

#endif
