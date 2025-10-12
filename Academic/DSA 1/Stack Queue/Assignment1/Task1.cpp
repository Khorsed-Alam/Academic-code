 #include<iostream>
 #define Max 50
 using namespace std;

 int stackArr[Max];
 int top=-1;

 void push(int item, int N){
    if(top==N-1){
        cout<<"Stack is Overflow !!"<<endl;
    }
    else{
        top++;
        stackArr[top]=item;
    }
 }

 void pop(){
    if(top==-1){
        cout<<"Stack Under Flow";
    }
    else {
        top--;
    }
 }

 void display(){
    cout<<"Size: "<<(top+1)<< " Item: ";
    if(top==-1){
        cout<<"NULL";
    }else{
        for(int i=0;i<= top;i++){
            cout<<stackArr[i]<<" ";
        }
    }
    cout<<endl;

 }

 int main(){
    int N,T;
    cin>>N>>T;

    for(int i=0;i<T;i++){
        int choice;
        cin>>choice;
        if(choice ==1){
            int item;
            cin>>item;
            push(item,N);
        }else if(choice ==2){
            pop();
        }else {
            cout<<"Invalid Operation"<<endl;
        }

        display();
    }
    return 0;
 }