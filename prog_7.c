#include <stdio.h>
#include <limits.h>

#define V 6
int minDistance(int dist[], int visited[]){
    int min = INT_MAX, min_index;

    for(int i =0; i<V; i++){
        if(!visited[i] && dist[i]<=min){
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void printSolution(int dist[]){
    printf("Vertex \t Distance from source \n");
    for(int i = 0; i<V; i++){
        if(dist[i]==INT_MAX){
            printf("%d \t INF \n", i);
        }else{
        printf("%d \t %d\n", i, dist[i]);
        }
    }
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int visited[V];

    for(int i =0; i <V; i++){
        dist[i]= INT_MAX;
        visited[i]=0;
    }
    dist[src] = 0;

    for(int count = 0; count < V-1; count++){
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for(int i = 0; i<V; i++){
            if(!visited[i] && graph[u][i] && dist[u]!= INT_MAX && dist[u]+graph[u][i]<dist[i]){
                dist[i]= dist[u] + graph[u][i];
            }
        }
    }
    printSolution(dist);
}

int main(){
    int graph[V][V]={
        {0, 10, 0, 0, 5, 0},
        {0, 0, 2, 0 ,3, 0},
        {0, 0, 0, 5, 0, 7},
        {8, 0, 6, 0, 0, 0},
        {0, 3, 9, 2, 0, 4},
        {0, 0, 0, 0, 0, 0}
    };

    int source = 0;
    printf("Dijkstra's Algorithm starting from source %d: \n", source);
    dijkstra(graph,source);

    return 0;
}