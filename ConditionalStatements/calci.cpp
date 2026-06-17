#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    char c;
    cout<<"enter the operator:";
    cin>>c;
    switch(c){
        case '+':cout<<"sum:"<<a+b<<endl;
        break;
        case '-':cout<<"difference:"<<a-b<<endl;
        break;
        case '*':cout<<"product:"<<a*b<<endl;
        break;
        case '/': if(b!=0){
            cout<<"division:"<<a/b<<endl;
        }
        else{
            cout<<"division by zero error"<<endl;
        }
    }
    return 0;
}