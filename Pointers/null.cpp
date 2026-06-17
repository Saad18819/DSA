#include<iostream>
using namespace std;
int main(){
//  int *ptr ; this will store garbage value because we have not initialized it yet and apan esa nhi karte in pointer coz u generally use pointer to access value and koi garbage vakue se apan bata nhi payege ki pointer actually me value hold karta hai ya nhi although error nhi aayega and code run ho jayega but it is not a good practice to use uninitialized pointer
 int *ptr = NULL; // so basiaclly jab tak koi address store nhi we give 0 address
 cout<<ptr<<endl;

 cout<<*ptr<<endl; // segmentation fault dega coz null pointer ko never do dereference karna chahiye coz isme koi value store nhi hai to jab apan usko dereference karenge to error dega and iske baad koi bhi code likhoge to voh nhi print hoga coz yaha pe code hault ho jaata

 cout<<"bye"<<endl; // ye print nhi hoga
 return 0;

}