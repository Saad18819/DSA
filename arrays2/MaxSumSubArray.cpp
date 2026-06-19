#include<iostream>
using namespace std;

void maxSum(int *arr , int n){

      int maxresult = INT_MIN;

    for(int start = 0 ;start<n;start++){
   
     for(int end = start ; end<n;end++){
        int currSum = 0;
        for(int i = start ; i<=end;i++){
            currSum += arr[i];
        
        
        }
        
         cout<<currSum<<",";
          maxresult = max(maxresult,currSum); 
       
     }
     cout<<endl;
    }
    cout<<maxresult;
}

int main(){
    int arr[] = {23,34,45,56,67,78};

    maxSum(arr , 6);

    return 0;
}