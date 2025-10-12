#include<iostream>
using namespace std;
void choice(){
    cout<<"1. Linear Search: "<<endl;
    cout<<"2. Binary Search: "<<endl;
}
void LinearSearch(int arr[],int arrSize, int key){
    bool found=false;
    for(int i=0;i<arrSize;i++){
        if(arr[i]==key){
            cout<<"Found at array index : "<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Element not Founded"<<endl;
    }
}

void BinarySearch(int arr[], int arrSize, int key){
    bool found=false;
    int low=0;
    int high=arrSize-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            cout<<"Target Founded: "<<mid<<endl;
            found=true;
            break;
        }else if(key>arr[mid]){
            low=mid+1;
        }else{
            high=mid -1;
        }
    }
    if(!found){
        cout<<"Element Not Found. "<<endl;
    }
}
int main(){
    int arrSize;
    cout<<"Enter array size: ";
    cin>> arrSize;

    int arr[arrSize];

    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Array Before sort: ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    while(true){
        choice();
        int ch;
        cout<<"Enter choice number: ";
        cin>>ch;

        if(ch==1){
            int key;
            cout<<"Enter Search value: ";
            cin>>key;
            LinearSearch(arr,arrSize, key);
        }
        else if(ch==2){

            
            int key;
            cout<<"Enter Search value: ";
            cin>>key;
            BinarySearch(arr,arrSize, key);
        }
    }
}