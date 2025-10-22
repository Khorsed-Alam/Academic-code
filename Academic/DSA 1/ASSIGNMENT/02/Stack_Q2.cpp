#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int N;
    cout<<"Enter numbr of element:";


    cin >>N;

    vector<int> Arr(N);

    cout <<"Enter "<<N<<"elements:";

    for (int i=0;i<N;i++)
    {

        cin >> Arr[i];
    }
    vector<int>gn(N,-1);



    stack<int>stk;

    for (int i=N-1;i>=0;i--){

        while(!stk.empty()&& stk.top()<Arr[i])
        {

            stk.pop();

        }


        if (!stk.empty()) 
        {

            gn[i] = stk.top();
        }

        stk.push(Arr[i]);
    }

    cout <<"next greater elemnt:";


    for (int i=0;i<N;i++)
    {
        cout<<gn[i]<<" ";
    }
    cout << endl;

    return 0;
}