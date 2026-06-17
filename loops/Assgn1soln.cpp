#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no:";
    cin>>n;
    int prod=1;
    if(n==0){
        prod=1;
    }else{
        for(int i=1;i<=n;i++){
            prod*=i;
        }
    }
cout<<"the factorial is:"<<prod;
return 0;
}