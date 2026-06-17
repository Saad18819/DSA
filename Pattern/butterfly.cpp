#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        // left star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        // spaces
        for(int j=1;j<=n-2*i;j++){
            cout<<" "<<" ";
        }
        // right star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n/2;i++){
        // left star
        for(int j=1;j<=(n/2)-i+1;j++){
            cout<<"*"<<" ";
        }
        // spaces
        for(int j=1;j<=2*(i-1);j++){
            cout<<" "<<" ";
        }
        // right star
        for(int j=1;j<=(n/2)-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}