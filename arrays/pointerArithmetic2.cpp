#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
       cout<<*arr<<endl;
       arr++; // here u will realise ki ye next index me hi jaara
    }
}
int main(){
    int a =35;
    int *ptr = &a;
    cout<<ptr<<endl;

    ptr = ptr +3;
    cout<<ptr<<endl;
    cout<<(ptr-3)<<endl;
int marks[] = {12,23,34,45,56};
    printArr(marks,5);
    return 0;
}









