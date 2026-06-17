#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"Enter the no of terms:";
    cin>>terms;
    int first=0 , sec=1;
    cout<<first<<" "<<sec;
    for(int i=3;i<=terms;i++){
int third=first + sec;
cout<<" "<<third;
first=sec;
sec=third;
    }
    return 0;
}