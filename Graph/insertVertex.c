#include<stdio.h>
#include"graph.h"

int insertVertex(tGraph *graph, unsigned int vertex){
  
    if(graph->graphType == MATRIX){  
        if(vertex >= graph->tStruct.tMatrixAdj.max_vertices){
            //Vertex is out of bounds
            return OUT_OF_BOUND;
        }
        else if(isInstantiated(graph, vertex)){
            //Vertex not valid (already exists)
            return VERTEX_INVALID;   
        }
        else{
            graph->num_vertices += 1;
            
            int i;
            
            //set vertex as valid
            for(i = 0; i < graph->tStruct.tMatrixAdj.max_vertices; i += 1){
                
                graph->tStruct.tMatrixAdj.graph[vertex][i].tVertexMatrix.key = 0;
                graph->tStruct.tMatrixAdj.graph[i][vertex].tVertexMatrix.key = 0;
                
            }
		
        }
        
        return 0;
        
    }
  
}