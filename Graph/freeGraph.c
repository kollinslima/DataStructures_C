#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

int freeGraph(tGraph **graph){
    
    if((*graph)->graphType == MATRIX){
        
        int i;
        
        for (i = 0; i < (*graph)->tStruct.tMatrixAdj.max_vertices; i += 1)
		{
			free((*graph)->tStruct.tMatrixAdj.graph[i]);
		}
		
		free((*graph)->tStruct.tMatrixAdj.graph);
		
		return 0;
    }
    
}