#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void displayAdjList(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int V =3;
    vector<vector<int>> adj(V);

    addEdge(adj, 1, 0);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);

    cout << "Adjacency List Representation:" << endl;
    displayAdjList(adj);

    return 0;
}
