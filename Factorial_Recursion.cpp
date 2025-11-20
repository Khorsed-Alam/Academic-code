#include<iostream>
#include<vector>
using namespace std;

vector<int> fact(int n){
vector<int>result(n);
int f=1;

for(int i=1;i<=n;i++){
    f*=i;
    result[i-1]=f;
}
return result;

}

void print(const vector<int> fact){


}
int main(){
int n;
cin>>n;

}
