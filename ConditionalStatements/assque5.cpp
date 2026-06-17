#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"write a number:";
cin>>num;
int a = (num/100);
int c = (num%10);
int b = (num/10)%10;
if((a*a*a)+(b*b*b)+(c*c*c)==num){
    cout<<"armstrong number";
}
else{
    cout<<"not an armstrong number";
}
     return 0;
}