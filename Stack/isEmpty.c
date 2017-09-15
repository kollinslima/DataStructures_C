#include <stdio.h>
#include "stack.h"

int isEmpty(const tStack *stack){

	return stack->top == NULL;
}
