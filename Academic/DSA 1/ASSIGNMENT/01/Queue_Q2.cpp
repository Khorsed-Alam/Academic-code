#include <iostream>
#include <queue>
#include<string>
using namespace std;

void Reverse(string str)

{

    queue<char> que1,que2;



    int m=str.length();



    for(int i=0;i<m;i++)

    {

        que1.push(str[i]);

    }   



    while(!que1.empty())

    {

        char c=que1.front();

        que1.pop();



        queue<char> temp;

        temp.push(c);

        while( !que2.empty() )

        {

            temp.push(que2.front());

            que2.pop();

        }

        que2= temp;

    }

    string rev;

    while(!que2.empty())

    {

        rev+=que2.front();

        que2.pop();

    }

    cout<<rev<<endl;

}



int main()

{

    string str;

    int N;

    cout<<"enter the number of operation:";

    cin>>N;



    for(int i=0;i<N;i++)

    {

         cout<<"enter the string:";

    cin>>str;

    Reverse(str);

    }
    return 0;

}