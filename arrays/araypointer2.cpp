#include<iostream>
using namespace std;
int main(){
    int x =31;
    int *ptr = &x;
    int y=57;
    ptr = &y; // ptr updated to 57  but this thing aint available in array pointer coz array act as a constant pointer which directs towards 0th index
    cout<<*ptr<<endl;
    return 0; 
}