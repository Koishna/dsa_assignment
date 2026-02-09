#include <stdio.h>
#include <stdlib.h>

#define VERTICES 10
int graph[VERTICES][VERTICES];
int visited[VERTICES];

void initGraph() {
    for (int i = 0;  i < VERTICES; i++){
        for (int j = 0; j < VERTICES; j++){
            graph[i][j] = 0;
        }
    }
}

void addEdge(int u, int v){
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void BFS(int start) {
    int queue[VERTICES], front = 0, rear = 0;
    for (int i = 0; i < VERTICES; i++) visited[i] = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS starting from %d:", start);
    while (front < rear){
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < VERTICES; i++ ) {
            if (graph[node][i] == 1 && !visited[i]){
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
        
    }
    printf("\n");
}

void DFS(int start){
    int stack[VERTICES], top = -1;
    for(int i =0; i<VERTICES; i++){
        visited[i] = 0;
    }

    stack[++top] = start;
    printf("DFS starting from %d: ", start);
    while (top >= 0){
        int node = stack[top--];

        if(!visited[node]){
            visited[node] =1;
            printf("%d ", node);

            for(int i = VERTICES-1; i>=0; i--) {
                if(graph[node][i]==1 && !visited[i]){
                    stack[++top] = i;
                }
            }
        }
    }
    printf("\n");
}

int main(){
    initGraph();
    
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,3);
    addEdge(1,4);
    addEdge(2,4);
    addEdge(3,5);
    addEdge(4,5);

    BFS(0);
    DFS(0);

    return 0;
}