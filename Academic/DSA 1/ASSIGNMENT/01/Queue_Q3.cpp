#include <iostream>
using namespace std;
#define MAX 100

int top1 = -1, top2 = -1;
int s1[MAX], s2[MAX];
bool Empty1()
{
    return top1 == -1;
}
bool Empty2()
{
    return top2 == -1;
}
void push1(int x)
{
    if (top1 == MAX - 1)
    {
        cout << "Stack 1 full"<<endl;
        return;
    }
    s1[++top1] =x;
}
void push2(int x)
{
    if (top2 == MAX - 1)
    {
        cout << "Stack 2 full!"<<endl;
        return;
    }
    s2[++top2] = x;
}
int pop1()
{
    if (Empty1())
    {
        cout << "Stack 1 full"<<endl;
        return -1;
    }
    return s1[top1--];
}

int pop2()
{
    if (Empty2())
    {
        cout << "Stack 2 full"<<endl;
        return -1;
    }
    return s2[top2--];
}

void enqueue(int x)
{
    push1(x);
}

int dequeue()
{
    if (Empty1() && Empty2())
    {
        cout <<"Queue empty"<<endl;
        return -1;
    }

    if (Empty2())
    {
        while (!Empty1())
        {
            int val = pop1();
            push2(val);
        }
    }

    return pop2();
}

void Display()
{
    if (Empty1() && Empty2())
    {
        cout <<"Queue empty"<<endl;
        return;
    }

    cout << "Queue elements (front → rear): ";

    for (int i = top2; i >= 0; i--)
    {
        cout << s2[i] << " ";
    }

    for (int i = 0; i <= top1; i++)
    {
        cout << s1[i] << " ";
    }

    cout << endl;
}
void Menu(){
    cout<<"Menu : "<<endl;
    cout<<"1. Enqueue: "<<endl;
    cout<<"2. Dequeud "<<endl;
    cout<<"3. Exit "<<endl;
    cout<<"4. Display"<<endl;
}

int main()
{
    int choice, value;
    Menu();
    while (true)
    {
        cout << "your choice:";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value Enqueue Value:";
            cin >> value;
            enqueue(value);
        }
        else if (choice==2)
        {
            int removed=dequeue();
            if (removed != -1)
                cout <<"Dequeued:"<< removed<<endl;
        }
        else if (choice == 3)
        {
            cout<<"Exiting."<<endl;
            break;
        }
        else if (choice==4)
        {
            Display();
        }
        else
        {
            cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}