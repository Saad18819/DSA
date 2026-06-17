#include<iostream>
using namespace std;

void conv(int n){
    int sum = 0;
    int pow =1;

    while(n>0){
        int digit = n%10;
        n = n/10;
        sum = sum + digit*pow;
        pow = pow*2;
    }
    cout<<sum;
}

int main(){
    int n;
    cout<<"Enter a binary number:";
    cin>>n;
    conv(n);
    return 0;
}
