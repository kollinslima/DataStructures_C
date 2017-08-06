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

Node *newNode();

Stack *newStack();

void *popStack(Stack *stack);

int pushStack(Stack *stack, Node *node, char *type);

int printStack(const Stack *stack, void (*printKey)(Node *node));

#endif
