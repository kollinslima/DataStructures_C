#ifndef _graph_h
#define _graph_h

/*
typedef struct node{
    void *key;
    char *type;
    struct node *next;
}tNode;
*/

typedef int tDefaultType;

typedef struct node{
    tDefaultType key;
}tNodeMatrix;

typedef struct{
	unsigned int num_vertices;
	unsigned int max_vertices;
	tNodeMatrix **graph;
}tGraphMatrix;

//********************Adjacency Matrix***************************//

unsigned int firstAdj(tGraphMatrix *graph, unsigned int u);

int freeGraphMatrix(tGraphMatrix **graph);

int hasAdj(tGraphMatrix *graph, unsigned int u);

int insertArc(tGraphMatrix *graph, unsigned int u, unsigned int v, double weight);

int insertVertex(tGraphMatrix *graph, unsigned int vertex);

int isAdj(tGraphMatrix *graph, unsigned int u, unsigned int v);

int isValid(tGraphMatrix *graph, unsigned int u);

tGraphMatrix *newGraphMatrix(unsigned int max_vertices);

unsigned int nextAdj(tGraphMatrix *graph, unsigned int u, unsigned int lastAdj);

double removeArc(tGraphMatrix *graph, unsigned int u, unsigned int v);

int removeVertex(tGraphMatrix *graph, unsigned int vertex);

#endif
