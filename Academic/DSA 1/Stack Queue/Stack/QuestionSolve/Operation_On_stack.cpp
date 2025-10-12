#include<iostream>
#define Max 6
using namespace std;

int stackArr[Max];
int top=-1;

void push(int value){
    if(top==Max-1){
        cout<<"Stack is empty!!"<<endl;
    }else{
        top++;
        stackArr[top]=value;
        cout<<value<<" Pushed in Stack "<<endl;
    }
}
int pop(){
    if(top==-1){
        cout<<"Stack is empty! ";
        return -1;
    }
    else{
        int popvalue=stackArr[top];
        top--;
        return popvalue;
    }
    
}
bool isEmpty(){
    return top==-1;
}

bool isfull(){
    return top=Max-1;
}

display(){
    if(top==-1){
        cout<<"Stack is empty!! "<<endl;
    }else{
        cout<<"Stack Element: ";
        for(int i=0;i<=top;i++){
            cout<<stackArr[i]<<" ";
        }
        cout<<endl;

    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(30);
    display();
    pop();
    display();
    cout<<"Is empty: "<<(isEmpty()? "Yes":"No")<<endl;
    cout<<"Is Full"<<(isfull()? "Yes":"No");
}