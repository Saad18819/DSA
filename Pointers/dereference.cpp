#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<a<<endl; // 10
    cout<<&a<<endl; // address of a 
    cout<<ptr<<endl; //  address of a 
    cout<<*(&a)<<endl; // 10
    cout<<*ptr<<endl; // *ptr = *(&a) = 10

    *ptr = 30; // a=30 karre
    cout<<a<<endl; // 30 dega
    return 0;
}