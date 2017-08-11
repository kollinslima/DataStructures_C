#include<stdio.h>
#include"graph.h"

int insertArc(tGraph *graph, unsigned int u, unsigned int v, double weight){
    
    if(graph->graphType == MATRIX){  
        
        if((u >= graph->tStruct.tMatrixAdj.max_vertices) || (v >= graph->tStruct.tMatrixAdj.max_vertices)) {
             //Vertex is out of bounds
            return -1;
        }
        else if(isInstantiated(graph,u) && isInstantiated(graph,v)){
            graph->tStruct.tMatrixAdj.graph[u][v].tVertexMatrix.key = weight;
        }
        else{
            //Vertex not valid (one or both vertex not instantiated)
            return -2;   
        }
    }
    
}