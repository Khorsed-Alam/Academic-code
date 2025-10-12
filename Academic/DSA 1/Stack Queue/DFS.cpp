#include<iostream>
#include<stack>
#include<queue>
#define V 7
using namespace std;

void initialize(int arr[][V])
{
    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V], int src, int des)
{
    arr[src][des] = 1;
    arr[des][src] = 1;
}

void display(int arr[][V])
{
    for (int i = 0; i < V; i++) {
        cout << i << ": ";
        for (int j = 0; j < V; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void DFS(int arr[][V])
{
    bool visited[V] = {false};
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            st.push(i);

            while (!st.empty()) {
                int v = st.top();
                st.pop();

                if (!visited[v]) {
                    visited[v] = true;
                    cout << " " << v << " ";

                    for (int j = V - 1; j >= 0; j--) {
                        if (arr[v][j] == 1 && !visited[j]) {
                            st.push(j);
                        }
                    }
                }
            }
        }
    }
}

void BFS(int arr[][V])
{
    bool visited[V] = {false};
    queue<int> q;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            q.push(i);
            visited[i]==true;

            while (!q.empty()) {
                int v = q.front();
                q.pop();

                if (!visited[v]) {
                    visited[v] = true;
                    cout << " " << v << " ";

                    for (int j = 0; j < V; j++) {
                        if (arr[v][j] == 1 && !visited[j]) {
                            q.push(j);
                            //visited[j]=true;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int adjMatrix[V][V];
    initialize(adjMatrix);

    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 0);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 2, 1);
    addEdge(adjMatrix, 2, 6);
    addEdge(adjMatrix, 2, 4);
    addEdge(adjMatrix, 4, 2);
    addEdge(adjMatrix, 4, 6);
    addEdge(adjMatrix, 4, 5);
    addEdge(adjMatrix, 6, 2);
    addEdge(adjMatrix, 6, 4);
    addEdge(adjMatrix, 5, 4);

    display(adjMatrix);
    cout << endl << "DFS: ";
    DFS(adjMatrix);
    cout << endl << "BFS: ";
    BFS(adjMatrix);

    return 0;
}
