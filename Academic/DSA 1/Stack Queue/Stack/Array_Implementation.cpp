#include<iostream>
#define MAX_SIZE 5
using namespace std;

int stackArr[MAX_SIZE];
int top=-1;

void push(int value){
    if(top==MAX_SIZE-1){
        cout<<"Stack is Overflow! "<<endl ;
    }
    else{
        top++;
        stackArr[top]=value;
        cout<<value<<" Push into Stack. "<<endl;
    }
}
int pop(){
    if(top==-1){
        cout<<"Stack is empty! "<<endl;
        return -1;
    }
    else{
        int pop_value=stackArr[top];
        top--;
        return pop_value;
    }
}

int peek(){
    if(top==-1){
        cout<<"Stack is  empty !!"<<endl;
        return -1; 
    }else{
        return stackArr[top];
    }
}

bool isEmpty(){
    return top==-1;
}

bool isFull(){
    return top=MAX_SIZE-1;
}
void display(){
    if(top==-1){
        cout<<"Stack is empty !! "<<endl;
    }else{
        cout<<"Stack Element: ";
        for(int i=0;i<=top;i++){
            cout<<stackArr[i]<<' ';
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Push value into the stack: "<<endl;
    push(10);
    push(20);
    push(30);
    push(40);

    cout<<"Display Stack Element: "<<endl;
    display();

    cout<<endl <<"Top Elemnt of the stack: "<<peek;

    cout<<endl<<"Pop value From Stack"<<endl ;
    pop();

    cout<<endl<< "Display Stack value after pop: "<<endl;
    display();


    cout<<"Is Stack Empty : "<< (isEmpty()? "Yes":"No")<<endl;


    cout<<endl<<"Is Stack Full : " <<(isFull()? "Yes": "No")<<endl;
}
