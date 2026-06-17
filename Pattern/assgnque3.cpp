#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int num =i;
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        // decresing no
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        // increasing no
        num=2;
        for(int j=1;j<=i-1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}