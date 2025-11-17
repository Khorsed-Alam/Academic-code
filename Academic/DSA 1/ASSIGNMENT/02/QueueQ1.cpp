#include<iostream>
#include<queue>

using namespace std;

void PillowpassWin(int N,int M)
{
    queue<int>que;
    for(int i=0;i<N;i++)
    {
        que.push(i);
    }
    while(que.size()>1)
    {
        for(int i=0;i<M-1;i++)
        {
           int C= que.front();
            que.pop();
            que.push(C);
        }
        int R=que.front();
        que.pop();
    }

    cout<<"the winner is:"<<que.front()+1<<endl;
}

int main()
{
    cout<<"enter the umber of the person:";
    int X;
    cin>>X;
    cout<<"enter the traversal of pillow:";
    int M;
    cin>>M;

    PillowpassWin(X,M);

}5