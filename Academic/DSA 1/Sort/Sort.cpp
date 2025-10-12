#include<iostream>
#include<string>
using namespace std;
void choice(){
    cout<<"1. Insertion Sort: "<<endl;
    cout<<"2. Bubble sort: "<<endl;
    cout<<"3. Selection sort: "<<endl;
    cout<<"4. Merge sort: "<<endl;
}
void SortedArray(int arr[], int arrSize){
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(int arr[], int arrSize){
    for(int i=0;i<arrSize;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= key;
    }

    SortedArray(arr, arrSize);
}

void BubbleSort(int arr[], int arrSize){
    for(int i=0;i<arrSize-1;i++){
        for(int j=0;j<arrSize-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    SortedArray(arr, arrSize);
}
void SelectionSort(int arr[], int arrSize){
    for(int i=0;i<arrSize;i++){
        int minIndex=i;
        for(int j=i+1;j<arrSize;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    SortedArray(arr, arrSize);
}
void Merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2]; // use proper sizes

    for(int i=0; i<n1; i++)
        L[i] = arr[left + i];
    for(int j=0; j<n2; j++)
        R[j] = arr[mid + 1 + j];

    int i=0, j=0, k=left;

    while(i<n1 && j<n2){
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];
}

void MergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}



int main(){
    int arrSize;
    cout<<"Enter array Size: ";
    cin>>arrSize;

    int arr[arrSize];
    for(int i=0;i<arrSize;i++){
        cin>> arr[i];
    }
    cout<<"Before Sort: ";
    for(int i=0;i<arrSize;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    while(true){
        choice();
        int ch;
        cout<<endl <<"Enter choice number : " ;
        cin>>ch;

        if(ch==1){
            InsertionSort(arr, arrSize);
        }
        else if(ch==2){
            BubbleSort(arr, arrSize);
        }
        else if(ch==3){
            SelectionSort(arr, arrSize);
        }
        else if(ch==4){
            MergeSort(arr, 0, arrSize-1);
              SortedArray(arr, arrSize);
        }
    }
    
}