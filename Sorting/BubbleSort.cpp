#include<iostream>
using namespace std;


void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        bool isSorted = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSorted = true;
            }
        }
        // !isSorted means false
        if(!isSorted){
            break;
        }
    }
    PrintArray(arr , n);
}

int main(){
    int arr[] = {5,4,3,2,1};
    bubbleSort(arr , 5);
    return 0;
}
