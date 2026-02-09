Documentation

A. Data Structure Defined
    -Adjacency Matrix (graph)
        -A 2D integer array graph [VERTICES][VERTICES] is used to represent the graph.
        -graph[i][j] = 1 indicates an edge between vertex i and vertex j.
        -VERTICES is defined as 10 i.e the maximum number of vertices.
    -Visited Array (visited)
        -An integer array visited[VERTICES] is used to keep track of the visited vertices during traversal.
        -This prevents revisiting the same vertex.
    -Queue(for BFS)
        -implemented using an array to store vertices in First in first out order.
    -Stack(for DFS)
        -implemented using array to store vertices in Last in First outorder.

B. Functions
1. initGraph()
    -initializes the adjacency matrix.
    -sets all value in graph to 0, indicating no edges initially.

2. addEdge(int u, int v)
    -adds an undireced edge between vertices u and v.
    -sets graph[u][v] and graph[v][u] to 1.

3. BFS(int start)
    -performes Breadth First Search traversal starting from the given vertex.
    -uses a queue to visit vertices level by level.
    -Steps
        -marks the starting vertex as visited.
        -enqueues the starting vettex.
        -dequeues a vertex, prints it, and enqueues all its unvisited adjacent vertices.
    -prints the BFS traversal order.

4. DFS(int start)
    -performes Depth First Search traversal starting from the given vertex.
    -uses a stack for traversal
    -Steps
        -pushes the starting vertex onto the srack.
        -pops a vertex, prints it, and pushes its unvisited adjacent vertices.
        -Traverses as deep as possible before backtracking.
    -prints the DFS traversal order.

C. The main() function.
    -initailizes the graph using initGraph().
    -adds edges to formm the graph.
    -calls BFS(0) to perform BFS starting from 0.
    -calls DFS(0) to perform DFS starting from vertex 0.

D. Output
    BFS starting from 0:0 1 2 3 4 5 
    DFS starting from 0: 0 1 3 5 4 2