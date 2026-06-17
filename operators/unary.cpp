#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b = ++a;
    cout<<a<<endl<<b<<endl;
    int c = a++;
    cout<<a<<endl<<c<<endl;
    int d = --a;
    cout<<a<<endl<<d<<endl;
    int e = a--;
    cout<<a<<endl<<e<<endl;
    return 0;

}