#include<iostream>
using namespace std;

void changeA(int n){
    n=20;
    cout<<n<<endl;
}

void changeB(int *ptr){
     *ptr = 30; // here *ptr means value of ptr which is address of b and jab apan usko dereference karenge to voh b ki value ko change kar dega coz ptr me b ka address store hai to jab apan usko dereference karenge to voh b ki value ko change kar dega
    cout<<*ptr<<endl;
}

// here in parameter *ptr doesnt mean value its address only thas how u initialize address inside function parameter and when u call the function u have to pass the address of variable which value u want to change

int main(){
    // pass by value
    int a = 10;
    changeA(a);
    cout<<a<<endl;
    
    // pass by reference
    int b=20;
    changeB(&b);
    cout<<b<<endl;

    return 0;

}