#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

Stack *newStack(){

    Stack *nStack = (Stack*)malloc(sizeof(Stack));
    nStack->top = NULL;

//    void *stackPointer = nStack;
    
    return nStack;
}
