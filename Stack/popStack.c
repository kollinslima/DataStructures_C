#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void *popStack(tStack *stack){

	if(isEmpty(stack)){
		return NULL;
	}
	
	tNode *auxNode = stack->top;
	void *auxKey = stack->top->key;

	stack->top = stack->top->next;

	if(auxNode->key != NULL) free(auxNode->key);
	if(auxNode->type != NULL) free(auxNode->type);
	free(auxNode);	

	return auxKey;
}
