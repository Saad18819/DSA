#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num:";
    cin>>num;
    int sum=0;
   // while((num/10)!=0){  this logic would miss the last digit do it urself and see
   while(num!=0){
        sum+=(num%10);;
        num=num/10;
    }
    cout<<"the sum of digit is:"<<sum<<endl;
    return 0;
}