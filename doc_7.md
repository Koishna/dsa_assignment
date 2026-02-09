A. Data Structures Defined
    -Adjacency Matrix(graoh[V][V])
        -represents the weighted graph.
        -graph[i][j] stores the weight of the edge of vertex i to j.
        -A value of 0 indicates no direct edge.
        -V is defined as 6, representing the number of vertices.
    -Distance Array(dist[])
        -stores the shortest distance from the source vertex to all other vertices,
        -initialized to INT_MAX(infinity).
    -Visited Array(visied[])
        -keeps track of vertices whose shortest distance is finalized.
        -prevents revisitng vertices.

B. Functions
    1. minDistance(dist, visited)
        -finds the vertex with the minimum distance value among the unvisited vertices.
        -returns the index of the selected vertex.

    2. printSolution(dist)
        -prints the shortest distance from the source vertex to all other vertices.
        -displays INF for vertices that are unreachable from the source.
    
    3. dijkstra(graph, src)
        -implements Dijkstra's shortest path algorithm.
        -initializes distance and visited arrays.
        -repeatedly selects the unvisited vertex with the smallest distance.
        -updates distances of adjacent vertices if a shorter path is found.
        -calls printSolution() to display the result.

C. The main() function
    -defines a weighted graph using an adjacency matrix.
    -sets the source vertex to 0.
    -calls dijkstra() to compute the shortest path from the source.
    -displays the shortest distances from the source to all vertices.

D. Output
    Dijkstra's Algorithm starting from source 0: 
    Vertex   Distance from source 
    0        0
    1        8
    2        10
    3        7
    4        5
    5        9
