#include<iostream>
using namespace std;

int fact(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    return product;
}

int main(){
int n;
cout<<"Enter a number:";
cin>>n;
int ans =fact(n);
cout<<ans;
return 0;
}