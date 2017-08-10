#include <stdio.h>
#include "queue.h"

int printSimpleLinkedList(const tSimpleLinkedList *queue, void (*printKey)(tNode *node)){

	tNode *auxNode = queue->front;

	while(auxNode != NULL){
		printKey(auxNode);
		auxNode = auxNode->next;
	}

	return 0;
}
