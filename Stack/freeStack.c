#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int freeStack(tStack **stack){

	while((*stack)->top != NULL){

		tNodeS *auxNode = (*stack)->top;
		(*stack)->top = (*stack)->top->next;
	
	
		free(auxNode->key);	
		auxNode->key = NULL;
	
	
		free(auxNode->type);	
		auxNode->type = NULL;
			
	
		free(auxNode);
	}

	free(*stack);

	return 0;
}
