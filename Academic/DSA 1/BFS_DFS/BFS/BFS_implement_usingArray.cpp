#include <iostream>
#include <queue>
#define V 7
using namespace std;

// Initialize adjacency matrix with 0s
void initialize(int arr[][V])
{
    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            arr[i][j] = 0;
}

// Add an undirected edge between src and des
void addEdge(int arr[][V], int src, int des)
{
    arr[src][des] = 1;
    arr[des][src] = 1; // Undirected graph
}

// Display the adjacency matrix
void display(int arr[][V])
{
    cout << "Adjacency Matrix:" << endl;
    for(int i = 0; i < V; i++)
    {
        cout << i << ": ";
        for(int j = 0; j < V; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

// BFS traversal of the graph
void BFS(int arr[][V])
{
    bool visited[V] = {false};  // Track visited vertices
    queue<int> q;

    for(int i = 0; i < V; i++)  // Handle disconnected graphs
    {
        if(!visited[i])
        {
            q.push(i);
            visited[i] = true;

            while(!q.empty())
            {
                int vertex = q.front();
                q.pop();
                cout << vertex << " ";

                for(int j = 0; j < V; j++)
                {
                    if(arr[vertex][j] == 1 && !visited[j])
                    {
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
    }
    cout << endl;
}

int main()
{
    int adjMatrix[V][V];
    initialize(adjMatrix);

    // Add edges
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 2, 4);
    addEdge(adjMatrix, 2, 6);
    addEdge(adjMatrix, 4, 5);
    addEdge(adjMatrix, 4, 6);

    display(adjMatrix);

    cout << "BFS Traversal:" << endl;
    BFS(adjMatrix);

    return 0;
}
