#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int V = 7;  // Number of vertices
vector<vector<int>> adj(V);  // Global adjacency list with size V

// Add an undirected edge
void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);  // Since the graph is undirected
}

// BFS traversal
void BFS()
{
    vector<bool> visited(V, false);
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

                for(int neighbor : adj[vertex])
                {
                    if(!visited[neighbor])
                    {
                        q.push(neighbor);
                        visited[neighbor] = true;
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

    cout << "BFS Traversal:" << endl;
    BFS();

    return 0;
}
