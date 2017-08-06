#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int freeSimpleLinkedList(SimpleLinkedList **queue){

	(*queue)->back = NULL;

	while((*queue)->front != NULL){

		Node *auxNode = (*queue)->front;
		(*queue)->front = (*queue)->front->next;

		if(auxNode->key != NULL) free(auxNode->key);
		if(auxNode->type != NULL) free(auxNode->type);
		free(auxNode);
	}

	free(*queue);

	return 0;
}
