#include<iostream>
using namespace std;
int main(){
    
    int arr[6];
for(int i=0;i<6;i++){
    cout<<"enter elements:";
    cin>>arr[i];
}

int maxValue=arr[0];
for(int i=0;i<6;i++){
    if(arr[i]>maxValue){
        maxValue = arr[i];
    }
}
cout<<maxValue;
return 0;
}