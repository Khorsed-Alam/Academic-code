#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cout <<"number of element:";
    cin >> N;

    stack<int> inStack, tmpStack;

    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        inStack.push(X);
    }


    while (!inStack.empty())
    {
        int X=inStack.top();
        inStack.pop();

       
        while (!tmpStack.empty() && tmpStack.top()<X )
        {
            inStack.push(tmpStack.top());
            tmpStack.pop();
        }

        tmpStack.push(X);
    }


    for(int i=0;i<N;i++)
    {
        cout<<tmpStack.top()<<" ";
        tmpStack.pop();
    }

    
    return 0;
}