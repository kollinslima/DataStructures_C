#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

tGraph *newGraph(eGraphType type, unsigned int max_vertices){

	tGraph *nGraph = (tGraph*)malloc(sizeof(tGraph));
	
	if(nGraph == NULL){
		printf("Out of Memory (Graph creation)");
		exit(1);
	}

	nGraph->num_vertices = 0;
	nGraph->graphType == type;

	if(nGraph->graphType == MATRIX){
		
		int i;
		
		nGraph->tStruct.tMatrixAdj.max_vertices = max_vertices;
		
		nGraph->tStruct.tMatrixAdj.graph = (tVertex**)malloc(max_vertices*sizeof(tVertex*));
	
		for (i = 0; i < max_vertices; i += 1)
		{
			nGraph->tStruct.tMatrixAdj.graph[i] = (tVertex*)malloc(max_vertices*sizeof(tVertex));
			
			if(nGraph->tStruct.tMatrixAdj.graph[i] == NULL){
				printf("Out of Memory (Graph creation)");
				exit(1);
			}		
			
			nGraph->tStruct.tMatrixAdj.graph[i][i].tVertexMatrix.key = -1;
		}
		
	}

	return nGraph;	
}
