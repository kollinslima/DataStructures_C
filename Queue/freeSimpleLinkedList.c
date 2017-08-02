#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int freeStack(Stack **stack){

	while((*stack)->top != NULL){

		Node *auxNode = (*stack)->top;
		(*stack)->top = (*stack)->top->next;

		if(auxNode->key != NULL) free(auxNode->key);
		if(auxNode->type != NULL) free(auxNode->type);
		free(auxNode);
	}

	free(*stack);

	return 0;
}
