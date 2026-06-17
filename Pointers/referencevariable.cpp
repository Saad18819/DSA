#include<iostream>
using namespace std;

void refVar(int &x){
x=35;
cout<<x<<endl;
}



int main(){

int a =10;
int &b = a;

cout<<a<<endl; // 10
cout<<b<<endl; // 10

b=25;

cout<<a<<endl; // 25
cout<<b<<endl; // 25


int c = 30;
cout<<c<<endl; // 30
refVar(c);
cout<<c<<endl; // 35

return 0;
}