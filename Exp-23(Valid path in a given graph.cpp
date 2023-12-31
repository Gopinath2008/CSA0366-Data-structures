#include <stdio.h>
#include <stdbool.h>
#define V 5
void dfs(int graph[][V], int vertex, bool visited[])
{
    visited[vertex] = true;
    printf("%d ", vertex);
    for (int i = 0; i < V; i++)
	{
        if (graph[vertex][i] && !visited[i])
		{
            dfs(graph, i, visited);
        }
    }
}
int main()
{
    int graph[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };
    bool visited[V];
    for (int i=0;i<V;i++)
	{
        visited[i]=false;
    }
    printf("Valid path: ");
    dfs(graph, 0, visited);
    printf("\n");
    return 0;
}
