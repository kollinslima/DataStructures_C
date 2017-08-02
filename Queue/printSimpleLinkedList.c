#include <stdio.h>
#include "stack.h"

int printStack(const Stack *stack, void (*printKey)(Node *node)){

	Node *auxNode = stack->top;

	while(auxNode != NULL){
		printKey(auxNode);
		auxNode = auxNode->next;
	}

	return 0;
}
