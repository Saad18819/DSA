#include<iostream>
using namespace std;

int fact(int n){
    int prod=1;
    for(int i=1;i<=n;i++){
        prod*=i;
    }
return prod;
}

int binCoeff(int n,int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}

int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    int ans = binCoeff(n,r);
    cout<<ans;
    return 0;
}