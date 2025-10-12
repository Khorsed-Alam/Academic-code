#include<iostream>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;

            }
            swap(a[j],a[min]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array Before Sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    SelectionSort(a, n);

    cout<<endl<<"Array after sort: ";
    for(int i=0;i<n ;i++){
          cout<<a[i]<<" ";
    }
    return 0;
}