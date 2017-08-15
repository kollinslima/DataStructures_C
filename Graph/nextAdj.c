#include<stdio.h>
#include"graph.h"

unsigned int nextAdj(tGraph *graph, unsigned int u, unsigned int lastAdj){
    
    if(graph->graphType == MATRIX){
        if(u >= graph->tStruct.tMatrixAdj.max_vertices) {
             //Vertex is out of bounds
            return -1;
        }
        else if(isInstantiated(graph,u)){
            
            int i;
            
            for (i = lastAdj+1; i < graph->tStruct.tMatrixAdj.max_vertices; i += 1){
                if(graph->tStruct.tMatrixAdj.graph[u][i].tVertexMatrix.key)
                    return i;
            }
            
            return -3;
            
        }
        else{
            //Vertex not valid (one or both vertex not instantiated)
            return -2;   
        }
    }
}