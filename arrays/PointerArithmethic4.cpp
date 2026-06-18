#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,23,34,45,56,67,78,89};
    int *ptr = arr; 
    int *ptr2 = ptr + 3;
    cout<<(ptr2-ptr)<<endl; // 1==true
    cout<<(ptr-ptr2)<<endl; // 0=false
    cout<<(ptr == ptr2)<<endl; // 0 = false

    return 0;

}
