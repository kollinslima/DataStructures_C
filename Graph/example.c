#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int main (int argc, char *argv[])
{
	
	int i,j;
	
	//Test Graph MatrixAdj
	tGraph *graph = newGraph(MATRIX,10);
	
	insertVertex(graph, 1);
	
	for (i = 0; i < 10; i += 1)
		{
			for (j = 0; j < 10; j += 1)		
				printf("%d ",graph->tStruct.tMatrixAdj.graph[i][j].tVertexMatrix.key);
			
			puts("");
		}

	return 0;
}
