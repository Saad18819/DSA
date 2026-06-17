#include<iostream>
using namespace std;
int main(){
    float eng,math,sci;
    cout<<"Enter marks of all three subjects:";
    cin>>eng>>math>>sci;
    float avg=(eng+math+sci)/3;
    cout<<"the average marks is:"<<avg<<endl;
    return 0;
    
}