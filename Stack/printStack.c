#include <stdio.h>
#include "stack.h"

int printStack(const tStack *stack, void (*printKey)(tNode *node)){

	tNode *auxNode = stack->top;

	while(auxNode != NULL){
		printKey(auxNode);
		auxNode = auxNode->next;
	}

	return 0;
}
