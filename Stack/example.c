#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

void printStk(Node *node){
	if(node->type == NULL)
		printf("%lf\n", *(double*)node->key);
	else if(!strcmp("INT", node->type))
		printf("%d\n", *(int*)node->key);

	else if(!strcmp("FLOAT", node->type))
		printf("%f\n", *(float*)node->key);

	else if(!strcmp("CHAR", node->type))
		printf("%c\n", *(char*)node->key);
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

	int i;

	for (i = 0; i < 10; i++) {
		Node *n = newNode();
		int *aux = (int*) malloc(sizeof(int));
		*aux = i;
		push(t,n,"INT");
	}

}

void main(){
    
	Stack *t = newStack();

	Node *n1 = newNode();
	Node *n2 = newNode();

	int a = 5;
	char b = 'a';


	n1->key = &a;
	n2->key = &b;

	push(t, n1, "INT");
	push(t, n2, "CHAR");

	test(t);
	loopTest(t);

	printStack(t,&printStk);
	    
	printf("Retorno: %lf",*(double*)pop(t));

	puts("");

	printStack(t,&printStk);

	freeStack(&t);
}
