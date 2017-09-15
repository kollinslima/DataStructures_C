#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void *popNodeStack(tStack *stack, tNode *node, int (*compareNode)(tNode *node1, tNode *node2)){

	if(isEmpty(stack)){
		return NULL;
	}
	
	tNode *auxNode = stack->top;
	tNode *auxLastNode;

	while (auxNode != NULL && !compareNode(auxNode, node)){
		auxLastNode = auxNode;
		auxNode = auxNode->next;
	}

	if(auxNode == NULL){
		return NULL;
	}
	else{
		if(compareNode(auxNode, stack->top)){
			return popStack(stack);
		}
		else{
			auxLastNode->next = auxNode->next;
			auxNode->next = NULL;
		}
	}

	void *auxKey = auxNode->key;

	//if(auxNode->key != NULL) free(auxNode->key);
	if(auxNode->type != NULL){ 
		auxNode->type = NULL;
		free(auxNode->type);
	}
	free(auxNode);	

	return auxKey;
}
