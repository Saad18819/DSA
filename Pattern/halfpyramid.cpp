#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter ch:";
    cin>>ch;
    for(int i=1;i<=ch-'A'+1;i++){
        for(int j=1;j<=i;j++){
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}