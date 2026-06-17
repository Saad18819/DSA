#include<iostream>
using namespace std;
int main(){
    float pen,penc,eraser;
    cout<<"Enter price:"<<endl;
    cin>>pen>>penc>>eraser;
    float total=1.18*(pen+penc+eraser);
    cout<<"the total is :"<<total<<endl;
    return 0;
}