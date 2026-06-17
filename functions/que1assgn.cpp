#include<iostream>
using namespace std;

int reverse(int num){
int no =0;
while(num>0){
   int digit = num%10;
    num = num/10;
    no = no*10 + digit;
}
return no;

}

int main(){
    int number;
    cout<<"number=";
    cin>>number;
    int answer = reverse(number);
    cout<<answer;
    return 0;
}

