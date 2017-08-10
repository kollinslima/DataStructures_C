#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

typedef struct{

	int a;
	float b;	

}elemento;

void printStk(tNode *node){
	if(node->type == NULL){
		printf("%lf\n", *(double*)node->key);
	}
	else if(!strcmp("INT", node->type)){
		printf("%d\n", *(int*)node->key);
	}

	else if(!strcmp("FLOAT", node->type)){
		printf("%f\n", *(float*)node->key);
	}

	else if(!strcmp("CHAR", node->type)){
		printf("%c\n", *(char*)node->key);
	}
	else if (!strcmp("ELEMENTO", node->type)) {
		printf("int %d\n", (((elemento*)node->key)->a));
		printf("float %f\n", (((elemento*)node->key)->b));

	}
}

void test(tStack *t){

	tNode *n3 = newNode();
	tNode *n4 = newNode();

	float *c = (float*) malloc(sizeof(float));
	*c = 6;
	double *d = (double*) malloc(sizeof(double));
	*d = 9;

	n3->key = c;
	n4->key = d;

	pushStack(t, n3, "FLOAT");
	pushStack(t, n4, NULL);
}

void loopTest(tStack *t){

	int i = 0;

	for (i = 0; i < 10; i++) {
		tNode *n = newNode();
		int *aux = (int*) malloc(sizeof(int));
		*aux = i;
		n->key = aux;
		pushStack(t, n, "INT");
	}

}

void main(){
    
	tStack *t = newStack();

	tNode *n1 = newNode();

	elemento *element = (elemento*) malloc(sizeof(elemento));
	element->a = 5;
	element->b = 7.2;


	n1->key = element;

	pushStack(t, n1, "ELEMENTO");

	test(t);
	loopTest(t);

	printStack(t,&printStk);

	popStack(t);

	puts("");

	printStack(t,&printStk);

	freeStack(&t);
}
