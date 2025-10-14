#include<iostream>
#include<vector>
using namespace std;
#define V 6

vector<int>adjList[V];

void addEdge(int src,int des){
    adjList[src].push_back(des);
}

void display(){
    for(int i=0;i<V;i++){
        cout<<"Vertex: "<<"->";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<"->";
        } 
        cout<<endl;
    }
}

int main(){
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,3);
    addEdge(1,4);
    addEdge(2,4);
    addEdge(3,1);
   // addEdge(5,8);
    display();
    

}