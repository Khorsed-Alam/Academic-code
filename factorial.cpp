#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec;
int n;
int result=1;

cin>>n;
for(int i=n ;i>0;i--)
    {
    for(int j=i;j>0;j--){
        result = result*j;

    }

 vec.push_back(result);
 result=1;

}
for(int val: vec){
    cout<<val<<" " ;

}

}
