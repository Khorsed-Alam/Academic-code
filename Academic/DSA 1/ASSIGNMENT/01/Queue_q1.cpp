#include<iostream>
#define Max 100
using namespace std;

int QueArr[Max];
int f=-1,r=-1;

void EnQueue(int item,int n){
    if(r==n-1){
        cout<<" Queue is Overflow! "<<endl;
    }else{
        if(f==-1){
            f=0;
        }
        r++;
        QueArr[r]=item;
    }
}

void DeQueue(){
    if(f==-1|| f>r){
        cout<< "Queue is Under flow";
    }else{
        f++;
    }
}

void display(){
    if(f==-1|| f>r){
        cout<<"Size 0 item=Null"<<endl;
    }else{
        cout<<"Size= "<<(r-f+1)<<" item= ";
        for(int i=f;i<=r;i++){
            cout<<QueArr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,t;
    cin>>n,t;
    for(int i=0;i<t;i++){
        int ch;
        cin>>ch;

        if(ch==1){
            int item;
            cin>>item;
            EnQueue(item,n);
        }else if(ch==2){
            DeQueue();
        }
        display();
    }
    return 0;
}