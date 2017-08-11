#include<stdio.h>
#include"graph.h"

int isInstantiated(tGraph *graph, unsigned int vertex){
  
    if(graph->graphType == MATRIX){  
        return !(graph->tStruct.tMatrixAdj.graph[vertex][vertex].tVertexMatrix.key == -1);
    }
  
}