#include <stdio.h>
#include "queue.h"

int isEmpty(tSimpleLinkedList *queue){

	return queue->front == NULL? 1 : 0;
}
