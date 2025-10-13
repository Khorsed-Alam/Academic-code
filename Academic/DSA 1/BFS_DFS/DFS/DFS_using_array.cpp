#include <iostream>
#include <stack>
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

// DFS traversal using stack and visited array
void DFS(int arr[][V])
{
    bool visited[V] = {false}; // Track visited vertices
    stack<int> st;

    for(int i = 0; i < V; i++) // Handle disconnected graphs
    {
        if(!visited[i])
        {
            st.push(i);

            while(!st.empty())
            {
                int vertex = st.top();
                st.pop();

                if(!visited[vertex])
                {
                    visited[vertex] = true;
                    cout << vertex << " ";

                    // Push neighbors in reverse order to maintain order
                    for(int j = V - 1; j >= 0; j--)
                    {
                        if(arr[vertex][j] == 1 && !visited[j])
                        {
                            st.push(j);
                        }
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

    cout << "DFS Traversal:" << endl;
    DFS(adjMatrix);

    return 0;
}
