#include <stdio.h>
#include "queue.h"

int printSimpleLinkedList(const SimpleLinkedList *queue, void (*printKey)(Node *node)){

	Node *auxNode = queue->front;

	while(auxNode != NULL){
		printKey(auxNode);
		auxNode = auxNode->next;
	}

	return 0;
}
