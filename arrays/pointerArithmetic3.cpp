#include<iostream>
using namespace std;

int main(){
 int x =5;
 int *ptr1 = &x;
 int *ptr2 = ptr1 + 3; // +12 bytes hora hai

 cout<<ptr1<<endl;
 cout<<ptr2<<endl;
 cout<<ptr2-ptr1<<endl; // ab yeh deta kitne int store ho sakte inke beech me and we know 12 byes ki spacing hai toh 3 will be the answer

 int marks[] = {12,23,34,45};
 int *ptr3 = marks; // pointing towards 0th index(12)
 int *ptr4 = marks +3 ;// pointing towards 3rd ndex(45)
 cout<<*ptr3<<endl; // 12
 cout<<*ptr4<<endl; // 45
 cout<<ptr4-ptr3<<endl;// 3 dega answer 


 return 0;


}
