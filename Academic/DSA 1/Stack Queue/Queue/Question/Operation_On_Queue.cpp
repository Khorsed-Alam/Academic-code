#include<iostream>
using namespace std;
#define Max 4

int queueArr[Max];
int front=-1,rear=-1;

void enqueue(int value){
    if(rear==Max-1){
        cout<<"Stack Overflow!!";
    }else{
        if(front==-1){
            front=0;
        }
        rear++;
        queueArr[rear]=value;
        cout<<value<<"Enqueued in Queue. "<<endl;
    }
    
}

int  dequeue(){
    if(front==-1 || front>rear){
        cout<<"Queue is empty!! "<<endl;
        return -1;
    }else{
        int dequeueValue=queueArr[front];
        front++;
        return dequeueValue;
    }
}
void display(){
    if(front==-1 && front>rear){
        cout<<"Queue is empty!! "<<endl;

    }else{
        for(int i=front;i<=rear;i++){
            cout<<queueArr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    enqueue(100);
    enqueue(100);
    enqueue(100);
    enqueue(100);
    enqueue(100);

    display();
    dequeue();
      dequeue();
    display();
}