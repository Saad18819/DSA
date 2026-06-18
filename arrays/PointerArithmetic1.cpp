#include<iostream>
using namespace std;
int main(){
    int x =30 ;
    int *ptr1 = &x;
    cout<<ptr1<<endl;
    ptr1++;
    cout<<ptr1<<endl;
    ptr1--;
    cout<<ptr1<<endl;

    
// this character vala code exact same mac me runs properly apne windows me thoda error dera dkk whyy
    char y = 'A';
    char *ptr2 = &y;
    cout<<ptr2<<endl;
    ptr2++;
    cout<<ptr2<<endl;
    ptr2--;
    cout<<ptr2<<endl;

    return 0;
}