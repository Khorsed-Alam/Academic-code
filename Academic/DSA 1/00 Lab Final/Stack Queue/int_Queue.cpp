#include<iostream>
#include<vector>
using namespace std;

struct queue{
    vector<int>que;

    void enqueue(int val){
        que.push_back(val);
        cout<<val<<"Push into queue. ";
    }
    void dequeue(){
        if(que.empty()){
            cout<<"Queue is empty! ";
            return ;
        }
        else{
            cout<<que.front()<<" dequeue from queue."<<endl;
            que.erase(que.begin());
        }
    }
    void Front(){
        if(que.empty()){
            cout<<"Queue is empty!!"<<endl;
            return ;
        }
        cout<<"Front Element"<<que.front()<<endl;
    }
    void Rear(){
        if(que.empty()){
            cout<<"Queue is empty !!"<<endl;
            return  ;
        }
        cout<<"Rear Element : "<<que.back()<<endl;
    }

    void display(){
        if(que.empty()){
            cout<<"Queue is empty !!"<<endl;
            return ;
        }
        for(int i= 0;i<que.size();i++){
            cout<<que[i]<<" ";
        }
        cout<<endl;
    }

    void isempty(){
        if(que.empty()){
            cout<<"Queue is empty!!"<<endl;
            return ;
        }else{
            cout<<"Queue have element"<<endl;
        }
    }

    void size(){
        cout<<"Size of Queue is "<<que.size()<<endl;

    }




};
void displayMenu(){
    cout<<"1.Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Front"<<endl;
    cout<<"4. Rear"<<endl;
    cout<<"5. Display"<<endl;
    cout<<"6. isEmpty"<<endl;
    cout<<"7. Size "<<endl;
}

int main(){
    queue Que;
    int choice,val;
    cout<<"Queue Menu"<<endl;
    displayMenu();

    while(true){
        cout<<"Enter choice number: ";
        cin>>choice;

        switch(choice){
            case 1: 
            cout<<"Enter enqueue value: ";
            cin>>val;
            Que.enqueue(val);
            break;
            case 2:
            Que.dequeue();
            break;

            case 3:
            Que.Front();
            break;

            case 4:
            Que.Rear();
            break;

            case 5:
            Que.display();
            break;
            case 6:
            Que.isempty();
            break;

            case 7:
            Que.size();
            break;
 

        }
    }

}
