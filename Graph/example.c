#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

#define NVERTEX 10

void printGraphMatrix(tGraph *graph){
	
	int i,j;
	
	for (i = 0; i < NVERTEX; i += 1){
		for (j = 0; j < NVERTEX; j += 1)		
			printf("%d ",graph->tStruct.tMatrixAdj.graph[i][j].tVertexMatrix.key);
			
		printf("\n");
	}
	printf("\n");
}

void printStk(tNode *node){
	
	printf(" %d", *(int*)node->key);
}

void printGraphVList(tGraph *graph){
	
	int i,j;
	
	for (i = 0; i < NVERTEX; i += 1){
		if(isInstantiated(graph,i)){
			printf("%d\n", i);
			printStack(graph->tStruct.tVListAdj.graph[i].tVertexVList.stackKey, &printStk);
			printf("\n");
		}
	}
}


int main (int argc, char *argv[])
{
	
	int i,j;
	
	//*******************Test Graph MatrixAdj*********************
	// tGraph *graph = newGraph(MATRIX,NVERTEX);
	
	
	// int ret1 = insertVertex(graph, 0);
	// int ret2 = insertVertex(graph, 1);
	// int ret3 = insertVertex(graph, 9);
	// insertVertex(graph, 8);
	
	// printf("ret1: %d\n", ret1);
	// printf("ret2: %d\n", ret2);
	// printf("ret3: %d\n", ret3);
	
	// printf("vertex: %d\n", graph->num_vertices);
	
	// printGraphMatrix(graph);
	
	// removeVertex(graph,0);
	// int ret4 = removeVertex(graph,2);
	
	// printf("ret4 = %d\n", ret4);
	// printGraphMatrix(graph);
	
	// insertArc(graph,1,9,20);
	// insertArc(graph,9,1,20);
	// insertArc(graph,9,8,20);
	// int ret5 = insertArc(graph,1,3,20);
	// int ret6 = insertArc(graph,1,11,20);
	
	// printf("ret5 = %d\n", ret5);
	// printf("ret6 = %d\n", ret6);
	// printGraphMatrix(graph);
	
	// printf("%d\n", isAdj(graph,1,9));
	// printf("%d\n", isAdj(graph,2,9));
	// printf("%d\n", isAdj(graph,11,9));
	
	// printf("HasAdj %d\n", hasAdj(graph,1));
	// printf("removeArc %lf\n",removeArc(graph,1,9));
	// printf("HasAdj %d\n", hasAdj(graph,1));
	
	// unsigned int firstAdj_nove = firstAdj(graph,9);
	// printf("FirstAdj %d\n", firstAdj_nove);
	// printf("NextAdj %d\n", nextAdj(graph,9,firstAdj_nove));
	// printf("NextAdj %d\n", nextAdj(graph,9,nextAdj(graph,9,firstAdj_nove)));
	
	// freeGraph(&graph);
	
	
	//*******************Test Graph VectorList*********************
	// tGraph *graph = newGraph(VECTOR_LIST,NVERTEX);
	
	
	//  int ret1 = insertVertex(graph, 0);
	//  int ret2 = insertVertex(graph, 1);
	//  int ret3 = insertVertex(graph, 9);
	//  int ret_8 = insertVertex(graph, 8);
	
	//  printf("ret1: %d\n", ret1);
	//  printf("ret2: %d\n", ret2);
	//  printf("ret3: %d\n", ret3);
	//  printf("ret_8: %d\n", ret_8);
	
	//  printf("vertex: %d\n", graph->num_vertices);
	
	//  printGraphVList(graph);
	
	//  removeVertex(graph,0);
	//  int ret4 = removeVertex(graph,2);
	
	//  printf("ret4 = %d\n", ret4);
	//  printf("vertex: %d\n", graph->num_vertices);
	//  printGraphVList(graph);
	
	//  insertArc(graph,1,9,20);
	//  insertArc(graph,9,1,20);
	//  insertArc(graph,9,8,20);
	//  int ret5 = insertArc(graph,1,3,20);
	//  int ret6 = insertArc(graph,1,11,20);
	
	//  printf("ret5 = %d\n", ret5);
	//  printf("ret6 = %d\n", ret6);
	//  printGraphVList(graph);
	
	//  printf("%d\n", isAdj(graph,1,9));
	//  printf("%d\n", isAdj(graph,2,9));
	//  printf("%d\n", isAdj(graph,11,9));
	
	// printf("HasAdj %d\n", hasAdj(graph,1));
	// printf("removeArc %lf\n",removeArc(graph,1,9));
	// printf("HasAdj %d\n", hasAdj(graph,1));
	
	//  unsigned int firstAdj_nove = firstAdj(graph,9);
	//  printf("FirstAdj %d\n", firstAdj_nove);
	//  printf("NextAdj %d\n", nextAdj(graph,9,firstAdj_nove));
	//  printf("NextAdj %d\n", nextAdj(graph,9,nextAdj(graph,9,firstAdj_nove)));
	
	//  freeGraph(&graph);
	
		//*******************Test Graph ListList*********************
	 tGraph *graph = newGraph(LIST_LIST,NVERTEX);
	
	
	//  int ret1 = insertVertex(graph, 0);
	//  int ret2 = insertVertex(graph, 1);
	//  int ret3 = insertVertex(graph, 9);
	//  int ret_8 = insertVertex(graph, 8);
	
	//  printf("ret1: %d\n", ret1);
	//  printf("ret2: %d\n", ret2);
	//  printf("ret3: %d\n", ret3);
	//  printf("ret_8: %d\n", ret_8);
	
	//  printf("vertex: %d\n", graph->num_vertices);
	
	//  printGraphVList(graph);
	
	//  removeVertex(graph,0);
	//  int ret4 = removeVertex(graph,2);
	
	//  printf("ret4 = %d\n", ret4);
	//  printf("vertex: %d\n", graph->num_vertices);
	//  printGraphVList(graph);
	
	//  insertArc(graph,1,9,20);
	//  insertArc(graph,9,1,20);
	//  insertArc(graph,9,8,20);
	//  int ret5 = insertArc(graph,1,3,20);
	//  int ret6 = insertArc(graph,1,11,20);
	
	//  printf("ret5 = %d\n", ret5);
	//  printf("ret6 = %d\n", ret6);
	//  printGraphVList(graph);
	
	//  printf("%d\n", isAdj(graph,1,9));
	//  printf("%d\n", isAdj(graph,2,9));
	//  printf("%d\n", isAdj(graph,11,9));
	
	// printf("HasAdj %d\n", hasAdj(graph,1));
	// printf("removeArc %lf\n",removeArc(graph,1,9));
	// printf("HasAdj %d\n", hasAdj(graph,1));
	
	//  unsigned int firstAdj_nove = firstAdj(graph,9);
	//  printf("FirstAdj %d\n", firstAdj_nove);
	//  printf("NextAdj %d\n", nextAdj(graph,9,firstAdj_nove));
	//  printf("NextAdj %d\n", nextAdj(graph,9,nextAdj(graph,9,firstAdj_nove)));
	
	//  freeGraph(&graph);

	return 0;
}
