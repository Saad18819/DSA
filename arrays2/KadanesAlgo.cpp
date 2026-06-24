#include<iostream>
using namespace std;

int Kadanebhaiya(int *arr , int n){
    int maxSum = INT_MIN;
    int CurrSum = 0;
    for(int i = 0;i<n;i++){
        CurrSum += arr[i];
        maxSum = max(CurrSum , maxSum);
        if(CurrSum<0){
            CurrSum = 0;
        }
    }
    return maxSum;
}
int main(){
int arr[] = {1,2,-89,34,56,-100};
int result = Kadanebhaiya(arr ,6);
cout<<result;
return 0;
}