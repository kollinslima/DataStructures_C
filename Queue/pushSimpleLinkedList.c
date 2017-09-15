#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"queue.h"

int pushSimpleLinkedList(tSimpleLinkedList *queue, tNode *node, char *type){

	tNode *nNode = (tNode*) newNodeQueue();

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

	if(isEmpty(queue)){
		queue->front = nNode;
	}
	else{
		queue->back->next = nNode;
	}

	nNode->next = NULL;
	queue->back = nNode;

	return 0;
}
