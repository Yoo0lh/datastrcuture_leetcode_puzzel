#ifndef GRAPH_H
# define GRAPH_H
#define MAX 100
#include <bits/stdc++.h>
typedef struct edgenode {
	int y; 
	int weight; 
	struct edgenode *next;
}edgenode;
typedef struct {
	edgenode *edges[MAX + 1]; 
	int degree[MAX + 1];
	int nvertices;
	int nedges; 
	int directed;
}graph;
#endif
