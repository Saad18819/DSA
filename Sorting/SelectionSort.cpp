#include<iostream>
using namespace std;

void PrintArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        int minInd = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minInd]){
                minInd = j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
  
}

int main(){
    int arr[] = {64,25,12,23,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr , n);
    PrintArray(arr , n);
    return 0;

}