#include<iostream>
using namespace std;
#include<vector>

void addEdge(vector<int>adj[],int src,int des){
    adj[src].push_back(des);
}

void displayadj(vector<int>adj[],int V){
    for(int i=0;i<V;i++){
        cout<<"Vertex: "<<i<<" ->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ->";
        }

        cout<<endl;
    }
}

int main(){
    int V;
    cin>>V;
    vector<int> adj[V];

    addEdge(adj,0,1);
     addEdge(adj,0,2);
      addEdge(adj,1,2);
       addEdge(adj,1,3);
        addEdge(adj,2,0);
         addEdge(adj,2,1);
          addEdge(adj,3,6);
           addEdge(adj,4,1);

    displayadj(adj,V);

    return 0;
}