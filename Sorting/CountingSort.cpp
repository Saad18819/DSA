#include<iostream>
using namespace std;


void printArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}


void CountSort(int *arr , int n){

    // STEP-0 TO find min and max element in the array
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for(int i=0;i<n;i++){
minValue = min(minValue , arr[i]);
maxValue = max(maxValue,arr[i]);

    }

    // step -1 to build freq array
    int Freq[10000] = {0} ;  
    //whenever we initialize array with some number that goes to that index and rest of the index will be initilaize to 0 and if we dont initialixe then it will store garbage value in the array and also mene 10000 num isilye liya although index will be upto range but dynamic hai toh we just set the badi value ki baad me issue na ho

    for(int i=0;i<n;i++){
        Freq[arr[i]]++;
    }

    // step-2 to make freq 0 and update the array to make it sorted

    for(int i = minValue ,j=0; i<=maxValue;i++){
        while(Freq[i]>0){
            arr[j] = i;
            j++;
            Freq[i]--;
        }
    }

    printArray(arr,n);

}




int main(){
    int arr[] = {64,25,12,23,9};

}