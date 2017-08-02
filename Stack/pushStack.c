#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

int pushStack(Stack *stack, Node *node, char *type){

	Node *nNode = (Node*) newNode();

	if (nNode == NULL) {
		printf("Push fail (Stack): out of memory");
		exit(1);
	}

	nNode = node;

	if(type != NULL){
		nNode->type = (char*) malloc((strlen(type)+1)*sizeof(char));
		strcpy(nNode->type, type);
	}
	else{
		nNode->type == NULL;
	}

	if(isEmpty(stack)){
		nNode->next = NULL;
	}
	else{
		nNode->next = stack->top;
	}

	stack->top = nNode;

	return 0;
}
