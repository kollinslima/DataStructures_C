#include<stdio.h>
#include"graph.h"

int insertVertex(tGraph *graph, unsigned int vertex){
  
    if(graph->graphType == MATRIX){  
        if(vertex >= graph->tStruct.tMatrixAdj.max_vertices){
            //Vertex is out of bounds
            return 1;
        }
        else if(isInstantiated(graph, vertex)){
            //Vertex not valid (already exists)
            return 2;   
        }
        else{
            graph->num_vertices += 1;
            graph->tStruct.tMatrixAdj.graph[vertex][vertex].tVertexMatrix.key = 0;   //set vertex as valid
            
            //LIMPAR LINHA COLUNA
        }
    }
  
}