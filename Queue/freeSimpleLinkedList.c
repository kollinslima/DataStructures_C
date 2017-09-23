#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int freeSimpleLinkedList(tSimpleLinkedList **queue){

	(*queue)->back = NULL;

	while((*queue)->front != NULL){

		tNodeQ *auxNode = (*queue)->front;
		(*queue)->front = (*queue)->front->next;


		free(auxNode->key);	
		auxNode->key = NULL;


		free(auxNode->type);	
		auxNode->type = NULL;

		free(auxNode);
	}

	free(*queue);

	return 0;
}
