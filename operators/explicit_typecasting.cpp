#include<iostream>
using namespace std;

int main(){
    cout<<(int)('A')<<endl;
    cout<<(char)('A'+1)<<endl;
    cout<<(float)(10/3)<<endl; // this will give int value coz 10/3 gives 3 and then float so it gives 3 itself
    cout<<((float) 10/3)<<endl; // this will give float value coz 10 is converted to float and then divided by 3 so it gives 3.33333
    return 0;
}