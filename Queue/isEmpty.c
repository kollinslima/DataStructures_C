#include <stdio.h>
#include "stack.h"

int isEmpty(Stack *stack){

	return stack->top == NULL? 1 : 0;
}
