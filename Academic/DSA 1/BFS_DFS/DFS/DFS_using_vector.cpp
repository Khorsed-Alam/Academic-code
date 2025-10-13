#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int V = 7;  // Number of vertices
vector<vector<int>> adj(V);  // Global adjacency list with size V

// Add an undirected edge
void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);  // Since the graph is undirected
}

// DFS traversal using stack and visited array
void DFS()
{
    vector<bool> visited(V, false);  // Track visited vertices
    stack<int> st;

    for(int i = 0; i < V; i++)  // Handle disconnected graphs
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

                    // Push neighbors in reverse order for predictable order
                    for(int j = adj[vertex].size() - 1; j >= 0; j--)
                    {
                        int neighbor = adj[vertex][j];
                        if(!visited[neighbor])
                        {
                            st.push(neighbor);
                        }
                    }
                }
            }
        }
    }
    cout << endl;
}

// Optional: display adjacency list
void displayAdjList()
{
    cout << "Adjacency List:" << endl;
    for(int i = 0; i < V; i++)
    {
        cout << i << ": ";
        for(int neighbor : adj[i])
            cout << neighbor << " ";
        cout << endl;
    }
}

int main()
{
    // Add edges
    addEdge(0, 1);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    addEdge(2, 6);
    addEdge(4, 5);
    addEdge(4, 6);

    displayAdjList();

    cout << "DFS Traversal:" << endl;
    DFS();

    return 0;
}
