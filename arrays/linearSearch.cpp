// so basically apan ko array de diya and were told ki koi bhi number konse index pe aata hai
// so what linear search do ki basically it goes through each and every index starting from 0 then 1 untill it gets that num and returns their index even if 2 num voh array me hai so jo pehle aaya vhi pe stop ho jaata and if num exist hi nhi karta then after checking pura array it will return -1


#include<iostream>
using namespace std;
// int *arr or int arr[] inside function param same thing coz its anyways directing to 0th index ka addres
int linearSearch(int *arr , int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){
    int age[] = {12,23,34,45,56,67,78,89,90,100};
    int n = sizeof(age)/sizeof(int);

    cout<<linearSearch(age , n ,10); // so basically in the function return statement is giving the value to main here but if u dont assign it to variable or cout then it wont return coz usko pata hai main me dena hai but kisko dena hai ye nhi pata na cheecha
    cout<<linearSearch(age , n ,89);
return 0;
}

// If arr only knows where the 0th element lives, how does arr[i] successfully fetch arr[1], arr[2], or arr[5]?

// The short answer: Pointer Arithmetic and Subscript Notation.


// In C++, the bracket notation arr[i] is actually just syntactic sugar (a prettier way of writing) pointer math. Every time you write arr[i], the compiler internally converts it to: *(arr +i)