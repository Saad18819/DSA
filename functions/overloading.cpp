#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}

double sum(double a , double b){
    return a + b;
}
 int sum(int a , int b , int c){

    return a + b + c;
 }

 int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    double x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<sum(x,y)<<endl;

     return 0;
 }

 // basically function overloading is a feature in c++ where we can have multiple functions with the same name but different parameters. The compiler will determine which function to call based on the number and type of arguments passed to the function. This allows us to use the same function name for different purposes, making our code more readable and easier to maintain.