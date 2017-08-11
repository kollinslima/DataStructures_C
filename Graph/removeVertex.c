#include<stdio.h>
#include"graph.h"

int removeVertex(tGraph *graph, unsigned int vertex){
    
    if(graph->graphType == MATRIX){  
        if(vertex >= graph->tStruct.tMatrixAdj.max_vertices){
            //Vertex is out of bounds
            return -1;
        }
        else if(!isInstantiated(graph, vertex)){
            //Vertex not valid (don't exist)
            return -2;   
        }
        else{
            graph->tStruct.tMatrixAdj.graph[vertex][vertex].tVertexMatrix.key = -1;
        }
        return 0;
    }
    
}