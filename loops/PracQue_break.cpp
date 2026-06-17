#include<iostream>
using namespace std;
int main(){

    int num;
    do{
cout<<"Write no:";
cin>>num;
if(num%10==0){
    break;
}
else{
    cout<<num<<endl;
}
    }while(true); // cond for infinite loop
    return 0;
}