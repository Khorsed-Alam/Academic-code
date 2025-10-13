#include<iostream>
using namespace std;

#define V 5
#define Max_Edge 10

void addEdge(int adj[V][Max_Edge], int edge_Count[V],int u,int v){
    adj[u][edge_Count[u]]=v;
    edge_Count[u]++;
}

void displayAdj(int adj[V][Max_Edge],int edge_Count[ V]){
    for(int i=0;i<V;i++){
        cout<<i<< "-> ";

        for(int j=0;j<edge_Count[i];j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int adj[V][Max_Edge];
    int edge_Count[V]={ 0 };

    addEdge(adj,edge_Count,0,1);
    addEdge(adj,edge_Count,0,2);
    addEdge(adj,edge_Count,0,3);
    addEdge(adj,edge_Count,0,4);
    addEdge(adj,edge_Count,1,2);
    addEdge(adj,edge_Count,1,3);
    addEdge(adj,edge_Count,1,4);
    addEdge(adj,edge_Count,2,0);
    addEdge(adj, edge_Count,2,1);
    addEdge(adj,edge_Count,2,3);
    addEdge(adj, edge_Count,3,1);
    addEdge(adj,edge_Count,3,4);
    addEdge(adj,edge_Count,4 ,3);
     addEdge(adj,edge_Count,4 ,2);
      addEdge(adj,edge_Count,4 ,1);
    


    

    displayAdj(adj,edge_Count);
    return 0;
}