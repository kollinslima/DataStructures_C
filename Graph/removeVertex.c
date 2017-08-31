#include<stdio.h>
#include"graph.h"

int removeVertex(tGraph *graph, unsigned int vertex){
    
    if(graph->graphType == MATRIX){  
        if(vertex >= graph->tStruct.tMatrixAdj.max_vertices){
            //Vertex is out of bounds
            return OUT_OF_BOUND;
        }
        else if(!isInstantiated(graph, vertex)){
            //Vertex not valid (don't exist)
            return VERTEX_INVALID;   
        }
        else{
            graph->tStruct.tMatrixAdj.graph[vertex][vertex].tVertexMatrix.key = -1;
        }
        return 0;
    }
    
}