#include<stdio.h>
#include"graph.h"

double removeArc(tGraph *graph, unsigned int u, unsigned int v){
    
    if(graph->graphType == MATRIX){  
        if((u >= graph->tStruct.tMatrixAdj.max_vertices) || (v >= graph->tStruct.tMatrixAdj.max_vertices)) {
             //Vertex is out of bounds
            return -1;
        }
        else if(isInstantiated(graph,u) && isInstantiated(graph,v)){
            double aux = graph->tStruct.tMatrixAdj.graph[u][v].tVertexMatrix.key;
            graph->tStruct.tMatrixAdj.graph[u][v].tVertexMatrix.key = 0;
            return aux;
        }
        else{
            //Vertex not valid (one or both vertex not instantiated)
            return -2;   
        }
    }
    
}