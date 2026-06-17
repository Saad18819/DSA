#include<iostream>
using namespace std;

void evenOrOdd(int a){
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    evenOrOdd(n);
    return 0;
}