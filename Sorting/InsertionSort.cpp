#include<iostream>
using namespace std;

void printArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void InsertionSort(int *arr,int n){
    for(int i =1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>arr[prev+1]){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }

}



int main(){
int arr[] = {64,25,12,23,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr , n);
    printArray(arr , n);
    return 0;
}