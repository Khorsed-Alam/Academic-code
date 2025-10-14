#include <iostream>
#include <vector>
#define V 6
using namespace std;

vector<int> adj[V];

// Function to add an undirected edge
void addEdge(int src, int des)
{
    adj[src].push_back(des);
    adj[des].push_back(src);  // Add reverse edge for undirected graph
}

void display()
{
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
            cout << adj[i][j] << " -> ";
        cout << "NULL" << endl;
    }
}

int main()
{
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(3, 4);
    addEdge(3, 5);

    display();

    return 0;
}
