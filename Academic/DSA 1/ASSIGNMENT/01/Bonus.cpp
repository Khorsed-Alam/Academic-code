#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout <<"Number of students:";
    cin>>n;

    queue<int>std;
    stack<int>snd;

    cout << "Enter preferences of  student  (0 =circular, 1 =square): ";
    for (int i = 0; i < n; i++)
    {
        int prf;
        cin >> prf;
        std.push(prf);
    }

    cout << "Enter sandwiche(0=circular,1=square):";
    int Arr[n];
    for (int i = 0; i <n; i++)
        cin >> Arr[i];

    for (int i=n -1; i>= 0; i--)
        snd.push(Arr[i]);

    int count = 0;

    while (!std.empty() && count<std.size())
    {
        int frontStudent=std.front();
        int topSandwich=snd.top();

        if (frontStudent==topSandwich)
        {

            std.pop();
            snd.pop();
            count = 0;
        }
        else
        {

            std.pop();
            std.push(frontStudent);
            count++;
        }
    }

    cout << "Number of students unable to eat: " << std.size() << endl;

    return 0;
}