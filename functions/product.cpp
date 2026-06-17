#include<iostream>
using namespace std;

int pro(int a , int b){
    int prod = a*b;
    return prod;
}

int main(){
    int c,d;
    cout<<"Enter two numbers:";
    cin>>c>>d;
    int ans= pro(c,d);
    cout<<ans;
    return 0;
}