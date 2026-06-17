#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl; // ye mujhe 0th index ka address dega so basically arr is pointing towards 0th index so ye kinda pointer hai
    cout<<*arr<<endl; // *(adress) = value so 0th index pe jo value hai voh dega
    cout<<*(arr+1)<<endl; // arr[1]
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl; 

    return 0;
}