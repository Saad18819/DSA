#include<iostream>
using namespace std;

void decToBin(int num){
    int BinNum = 0;
    int pow =1;
    while(num>0){
        int rem =num%2;
        num = num/2;
        BinNum = BinNum + rem*pow;
        pow = pow*10;
       
    }
     cout<<BinNum<<endl;
}

int main(){
    int num;
    cout<<"Enter a decimal number:";
    cin>>num;
    decToBin(num);
    return 0;
}