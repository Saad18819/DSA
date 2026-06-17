#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    bool isAdult=(age>=18)?true:false;
    cout<<isAdult;
    return 0;
}