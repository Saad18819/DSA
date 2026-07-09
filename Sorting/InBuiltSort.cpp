#include<iostream>
#include<algorithm> // to use the sort in built c++ thing
using namespace std;


void PrintArray(int *arr , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

int marks[5] = {12,23,45,56,34};
 sort(marks , marks+5);
 // if i wanna sort from 2nd index to 5th index then sort(marks +2,marks+6)
PrintArray(marks , 5);
cout<<endl;
sort(marks , marks+5,greater<int>());
PrintArray(marks,5);
return 0;
}