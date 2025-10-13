#include <iostream>
#define V 6
using namespace std;

void initialize(int arr[][V]) {
    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V], int src, int des) {
    arr[src][des] = 1;
}

void display(int arr[][V]) {
    for(int i = 0; i < V; i++) {
        cout << i << ": ";
        for(int j = 0; j < V; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int adjMatrix[V][V];
    initialize(adjMatrix);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 4);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 3, 5);
    addEdge(adjMatrix, 4, 3);
    display(adjMatrix);
}
