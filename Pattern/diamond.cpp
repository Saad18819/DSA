#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    // 1half of pyramid
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=(n/2)-i;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*"<<" ";
         }
         cout<<endl;
        }
        

    // 2nd half of pyramid
for(int i=1;i<=n/2;i++){
    for(int j=1;j<=i-1;j++){
        cout<<" "<<" ";
    }
    for(int j=1;j<=(n-2*i)+1;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
    }