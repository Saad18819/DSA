#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0 ; i<=(n/2);i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int array[5] = {1,2,3,4,5};
reverse(array , 5);
printArray(array,5);
return 0;
}

