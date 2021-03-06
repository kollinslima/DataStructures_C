#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stack.h"

typedef struct{

	int a;
	float b;	

}elemento;

int compareNode (tNodeS *node1, tNodeS *node2){

	puts("compare");

	if(!strcmp("INT", node1->type))
		return (*(int*)node1->key == *(int*)node2->key);

	return 0;
}

void printStk(tNodeS *node){
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

	tNodeS *n3 = newNodeStack();
	tNodeS *n4 = newNodeStack();

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
		tNodeS *n = newNodeStack();
		int *aux = (int*) malloc(sizeof(int));
		*aux = i;
		n->key = aux;
		pushStack(t, n, "INT");
	}

}

void main(){
    
	tStack *t = newStack();

	tNodeS *n1 = newNodeStack();

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

	tNodeS *nodeTest = newNodeStack();
//	int *auxTest = (int*) malloc(sizeof(int));
//	*auxTest = 5;
//	nodeTest->key = auxTest;

	nodeTest->key = (void*)malloc(sizeof(int));
	*(int*)nodeTest->key = 5;

	popNodeStack(t, nodeTest, &compareNode);

	puts("");
	printStack(t,&printStk);	

	freeStack(&t);
}
