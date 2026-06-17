#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a no:";
    cin>>num;
    for(int i=2;i<=num;i++){
        int curr_no=i;
        bool isPrime=true;
        for(int j=2;j*j<=i;j++){
            if(curr_no % j == 0){
                isPrime=false;
            }
        } 
    if(isPrime){
        cout<<curr_no<<" ";}
    }
    return 0;
}