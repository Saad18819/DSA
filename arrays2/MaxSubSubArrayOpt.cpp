#include<iostream>
using namespace std;


int MaxSum(int *arr , int n){
    int maxNum = INT_MIN;
    for(int i=0;i<n;i++){
        int CurrSum = 0;
        for(int j=i;j<n;j++){
            CurrSum +=arr[j];
            
            cout<<CurrSum<<",";
            maxNum = max(maxNum , CurrSum);
        }
        cout<<endl;
    }
    return maxNum;
}


int main(){
    int arr[] = {1,2,3,4,5};

    int result = MaxSum(arr,5);
    cout<<result;
    return 0;
    

}