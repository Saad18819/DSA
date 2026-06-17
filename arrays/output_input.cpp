#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter elements:";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;

    int marks[5]={2,3,6,7,9};
     int length = sizeof(marks)/sizeof(int); // 20/4=5 elements
    for(int i=0;i<length;i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}