#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]); // in built function
        start++; // Move forward
        end--;   // Move backward
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

