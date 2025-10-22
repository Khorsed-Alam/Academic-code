 #include<iostream>
 #define Max 50
 using namespace std;

 int stkArr[Max];
 int t=-1;

 void Push(int Item, int n){

    if(t==n-1){

        cout<<" Stack is Overflow Because of Extra Push"<<endl;

    }
    else{
        t++;
        stkArr[t]=Item;
    }

 }

 void Pop(){

    if(t==-1){

        cout<<"Stack is underflow";

    }

    else {

        t--;

    }

 }

 void Display(){

    cout<<"Size: "<<(t+1)<< " Item: ";

    if(t==-1){

        cout<<"NULL";

    }else{

        for(int i=0;i<= t;i++){

            cout<<stkArr[i]<<" ";
        }
    }
    cout<<endl;
 }

 int main(){
    int n,T;
    cin>>n>>T;

    for(int i=0;i<T;i++){
        int ch;
        cin>>ch;
        if(ch ==1){
            int Item;
            cin>>Item;
            Push(Item,n);
        }else if(ch ==2){
            Pop();
        }else {
            cout<<"Invalid Operation"<<endl;
        }
      Display();

    }

    return 0;

 }