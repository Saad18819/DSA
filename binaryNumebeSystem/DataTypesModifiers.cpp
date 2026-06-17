#include<iostream>
using namespace std;
int main(){
 long long x= 123 ;// here u dont have to mention int coz long long here autom means int
 // by default int is signed
 // ab when we know ki value sab positive chahiye then write unsigned coz isse storage value badh jayegi 2^32 then

 unsigned int age;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long int)<<endl; // although int and long int ka size generally diff aana chahiye but based on system ka architecture ye dono ka size same bhi aa sakta hai
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(unsigned int)<<endl;
return 0;
}