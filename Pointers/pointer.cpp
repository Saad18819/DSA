#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
int **pptr = &ptr;

    cout<<&a<<endl; // & is used to get the address of a variable
cout<<ptr<<endl; // ptr is storing the address of a
cout<<sizeof(ptr)<<endl; 
cout<<pptr<<endl; // pptr is storing the address of ptr
cout<<sizeof(pptr)<<endl;

float pi = 3.14;
float *ptr2 = &pi;
cout<<&pi<<endl; // & is used to get the address of a variable
cout<<ptr2<<endl; // ptr2 is storing the address of pi
cout<<sizeof(ptr2)<<endl;

}


