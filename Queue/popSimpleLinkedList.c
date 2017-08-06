#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void *popSimpleLinkedList(SimpleLinkedList *queue){

	if(isEmpty(queue)){
		return NULL;
	}
	
	Node *auxNode = queue->front;
	void *auxKey = queue->front->key;

	queue->front = queue->front->next;
	
	if(queue->front == NULL) queue->back = NULL;

	if(auxNode->key != NULL) free(auxNode->key);
	if(auxNode->type != NULL) free(auxNode->type);
	free(auxNode);	

	return auxKey;
}
