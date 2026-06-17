#include<iostream>
using namespace std;

int add(int num){
int sum = 0;
while(num>0){
   int digit = num%10;
    num = num/10;
    sum+=digit;
}
return sum;

}

int main(){
    int number;
    cout<<"number=";
    cin>>number;
    int answer = add(number);
    cout<<answer;
    return 0;
}
