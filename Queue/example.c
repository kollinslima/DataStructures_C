#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

typedef struct{

	int a;
	float b;	

}elemento;

void printStk(Node *node){
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

void test(Stack *t){

	Node *n3 = newNode();
	Node *n4 = newNode();

	float *c = (float*) malloc(sizeof(float));
	*c = 6;
	double *d = (double*) malloc(sizeof(double));
	*d = 9;

	n3->key = c;
	n4->key = d;

	push(t, n3, "FLOAT");
	push(t, n4, NULL);
}

void loopTest(Stack *t){

	int i = 0;

	for (i = 0; i < 10; i++) {
		Node *n = newNode();
		int *aux = (int*) malloc(sizeof(int));
		*aux = i;
		n->key = aux;
		push(t, n, "INT");
	}

}

void main(){
    
	Stack *t = newStack();

	Node *n1 = newNode();

	elemento *element = (elemento*) malloc(sizeof(elemento));
	element->a = 5;
	element->b = 7.2;


	n1->key = element;

	push(t, n1, "ELEMENTO");

	test(t);
	loopTest(t);

	printStack(t,&printStk);

	puts("");

	printStack(t,&printStk);

	freeStack(&t);
}
