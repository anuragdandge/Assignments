# Graph 
Graph Representation
Elementry Graph operations BFS and DFS

# Introduction to Graph 

Graph is non-linear data structure which consists of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph can be defined as, a Graph consists of a finite set of vertices(or nodes) and set of Edges which connect a pair of nodes.

# Graph Representation

Graph can be represented in two ways:

1. Adjacency Matrix
2. Adjacency List

## Adjacency Matrix

In this representation, we use 2D array to represent a graph. If there are n vertices, then we are going to have an n x n Boolean matrix. If the value of adj[i][j] is 1, then there is an edge from vertex i to vertex j. If the value of adj[i][j] is 0, then there is no edge from vertex i to vertex j.



## Adjacency List

In this representation, we use array of lists to represent a graph. The size of the array would be equal to the number of vertices. Let the array be array[]. An entry array[i] represents the list of vertices adjacent to the ith vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as lists of pairs. Following is adjacency list representation of the above graph.

# Types of Graph

1. Undirected Graph
2. Directed Graph
3. Weighted Graph
4. Unweighted Graph

# Graph Terminology

1. Path: A path is a sequence of edges connecting a sequence of vertices. A path may or may not be simple. A simple path is a path in which no vertex appears more than once. A simple path may or may not be closed. A closed path is a simple path in which the first and last vertices are the same. A closed path may or may not be simple. A simple closed path is a simple path in which the first and last vertices are the same.

2. Cycle: A cycle is a path in which the first and last vertices are the same. A cycle may or may not be simple. A simple cycle is a cycle in which no vertex appears more than once.

3. Connected: A graph is connected if there is a path between every pair of vertices.

4. Connected Component: A connected component of an undirected graph is a subgraph in which any two vertices are connected to each other by paths, and which is connected to no additional vertices in the supergraph.

5. Tree: A tree is an undirected graph in which any two vertices are connected by exactly one path. A tree is connected and acyclic.

6. Forest: A forest is a disjoint union of trees.

7. Directed Acyclic Graph (DAG): A directed acyclic graph (DAG) is a directed graph with no directed cycles.

8. Weight: The weight of a graph is the sum of the weights of its edges.

9. Degree: The degree of a vertex is the number of edges incident to it.

10. In-Degree: The in-degree of a vertex is the number of directed edges that end at it.

11. Out-Degree: The out-degree of a vertex is the number of directed edges that start at it.

12. Degree Sequence: The degree sequence of a graph is the sequence of its vertex degrees, in non-increasing order.

13. Subgraph: A subgraph of a graph is a graph that is a subset of the vertices and edges of the original graph.

14. Induced Subgraph: An induced subgraph of a graph is a subgraph in which the vertices are a subset of the original graph's vertices, and the edges are a subset of the original graph's edges.

15. Spanning Tree: A spanning tree of a graph is a subgraph that is a tree and connects all the vertices together.

16. Spanning Forest: A spanning forest of a graph is a subgraph that is a forest and connects all the vertices together.

### Example of Graph 
 - Web Pages with links 
 - Methods in a programs that call each other 
 - Road Maps(e.g. Google Maps)
 - Airline routes
 - Facebook Friends
 - Course Pre-requisites
 - Family trees 
 - Paths through a maz  


BFS = Queue  (Breadth First Search ) 
DFS = Stack  ()

Path : A path from vertex a to b is sequence of edges that can be followed 

|Heading one | Heading Two | Heading Three|
|-|-|-|
|1| | |
