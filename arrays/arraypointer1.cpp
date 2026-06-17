#include<iostream>
using namespace std;

void func(int arr[]){
    arr[1] = 100;
}

void func2(int *arr){
    arr[2] = 2000;
}

void Arraysize(int arr[]){
    cout<<sizeof(arr)<<endl; // it will give 4 coz its directing to 0th index ko so it will be 4 bits only
// n = sizeof(arr)/no of elements;
/* for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
        */

        // the above wont work work coz n =1 aajayega
}

// important note always pass array size in parameter

void Array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){

   int age[5] = {23,34,45,56,67};
   cout<<age[1]<<","<<age[2]<<endl;
 func(age);
 cout<<age[1]<<endl;
 func2(age);
 cout<<age[2];
Array(age , 5);
 return 0;

}