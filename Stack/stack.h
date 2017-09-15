#ifndef _stack_h
#define _stack_h

typedef struct node{
    void *key;
    char *type;
    struct node *next;
}tNodeS;

typedef struct{
    tNodeS *top;
}tStack;


int freeStack(tStack **stack);

int isEmpty(const tStack *stack);

tNodeS *newNodeStack();

tStack *newStack();

void *popStack(tStack *stack);

void *popNodeStack(tStack *stack, tNodeS *node, int (*compareNode)(tNodeS *node1, tNodeS *node2));

int pushStack(tStack *stack, tNodeS *node, char *type);

int printStack(const tStack *stack, void (*printKey)(tNodeS *node));

#endif
