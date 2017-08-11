#include<stdio.h>
#include<stdlib.h>
#include"graph.h"

tGraphMatrix *newGraphMatrix(unsigned int max_vertices){

	int i;

	tGraphMatrix *nGraphMatrix = (tGraphMatrix*)malloc(sizeof(tGraphMatrix));

	nGraphMatrix->max_vertices = max_vertices;
	nGraphMatrix->num_vertices = 0;

	nGraphMatrix->graph = (tNodeMatrix**)malloc(max_vertices*sizeof(tNodeMatrix));

	for (i = 0; i < max_vertices; i += 1)
	{
		nGraphMatrix->graph[i] = (tNodeMatrix*)calloc(max_vertices,sizeof(tNodeMatrix));
	}

	return nGraphMatrix;	
}
