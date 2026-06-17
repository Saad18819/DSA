#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the no:";
    cin>>num;
    int sum=0;
    while(num!=0){
        int digit=num%10;
        if(digit%2!=0){
            sum+=digit;
        }
        num=num/10; 
    }
    cout<<"the sum of odd digit is:"<<sum<<endl;
    return 0;

}