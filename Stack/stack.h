#ifndef _stack_h
#define _stack_h

typedef struct node{
    void *key;
    char *type;
    struct node *next;
}tNode;

typedef struct{
    tNode *top;
}tStack;


int freeStack(tStack **stack);

int isEmpty(tStack *stack);

tNode *newNode();

tStack *newStack();

void *popStack(tStack *stack);

int pushStack(tStack *stack, tNode *node, char *type);

int printStack(const tStack *stack, void (*printKey)(tNode *node));

#endif
