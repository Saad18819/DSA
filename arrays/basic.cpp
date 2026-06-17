#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};


    cout<<sizeof(arr)<<endl;// 20 bytes dega coz int ka size 4 bytes hota hai to 5*4=20 bytes

    int lengthOfArr = sizeof(arr)/sizeof(int); // 20/4=5 elements
    cout<<lengthOfArr<<endl;
return 0;
}