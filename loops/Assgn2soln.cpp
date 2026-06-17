#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int prod;
    for(int i=1;i<=10;i++){
        prod=n*i;
        cout<<n<<"X"<<i<<"="<<prod<<endl;
    }
    return 0;
}