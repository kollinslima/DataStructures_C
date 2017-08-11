#ifndef _graph_h
#define _graph_h

typedef int tDefaultType;

typedef enum typeStruct {MATRIX, LIST1, LIST2} eGraphType;

typedef union{
    
    struct{
        tDefaultType key;
    }tVertexMatrix;
    
}tVertex;

typedef struct{
	unsigned int num_vertices;
	eGraphType graphType;
	
	union{
	    
	    struct{
	        unsigned int max_vertices;
	        tVertex **graph;
	    }tMatrixAdj;
	    
	}tStruct;
	
}tGraph;

//********************Adjacency Matrix***************************//

unsigned int firstAdj(tGraph *graph, unsigned int u);

int freeGraph(tGraph **graph);

int hasAdj(tGraph *graph, unsigned int u);

int insertArc(tGraph *graph, unsigned int u, unsigned int v, double weight);

int insertVertex(tGraph *graph, unsigned int vertex);

int isAdj(tGraph *graph, unsigned int u, unsigned int v);

int isInstantiated(tGraph *graph, unsigned int u);

tGraph *newGraph(eGraphType type, unsigned int max_vertices);

unsigned int nextAdj(tGraph *graph, unsigned int u, unsigned int lastAdj);

double removeArc(tGraph *graph, unsigned int u, unsigned int v);

int removeVertex(tGraph *graph, unsigned int vertex);

#endif
