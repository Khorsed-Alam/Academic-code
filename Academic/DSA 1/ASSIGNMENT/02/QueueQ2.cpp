#include <iostream>

#include <queue>

using namespace std;

void Revrse(string str)

{

    queue<char> que1, que2;

    int M = str.length();

    for (int i = 0; i < M; i++)

    {

        que1.push(str[i]);
    }

    while (!que1.empty())

    {

        char Ch = que1.front();

        que1.pop();

        queue<char> temp;

        temp.push(Ch);

        while (!que2.empty())

        {

            temp.push(que2.front());

            que2.pop();
        }

        que2 = temp;
    }

    string rev;

    while (!que2.empty())

    {

        rev += que2.front();

        que2.pop();
    }

    if (rev == str)
    {

        cout << "palindrom" << endl;
    }

    else
    {

        cout << "not palindrom" << endl;
    }
}

int main()

{

    string str;

    cout << "Enter string:";
    cin>>str;
    cin.ignore();

    Revrse(str);

    return 0;
}