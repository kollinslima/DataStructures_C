#include <stdio.h>
#include "queue.h"

int isEmpty(const tSimpleLinkedList *queue){

	return queue->front == NULL? 1 : 0;
}
