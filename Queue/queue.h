#ifndef _stack_h
#define _stack_h

typedef struct node{
    void *key;
    char *type;
    struct node *next;
}Node;

typedef struct{
    Node *top;
}Stack;


int freeStack(Stack **stack);

int isEmpty(Stack *stack);

void *newNode();

void *newStack();

void *pop(Stack *stack);

int push(Stack *stack, Node *node, char *type);

int printStack(const Stack *stack, void (*printKey)(Node *node));

#endif
