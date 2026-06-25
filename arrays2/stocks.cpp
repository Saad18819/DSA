#include<iostream>
using namespace std;

int maxProfit(int *arr , int n){
    int bestBuy[10000]; // leetcode me n ki max limit di thi and then we can initialise bestBuy[n] like this coz error dega compiler betsso max se initialise kar diya ki isse bada toh kuch hoga nhi
bestBuy[0] = INT_MAX;

for(int i = 1; i<n;i++){
    bestBuy[i] = min(arr[i-1], bestBuy[i-1]);
}

int Profit = 0;

for(int i= 0;i<n;i++){

int netProfit = arr[i] - bestBuy[i];
Profit = max(Profit ,netProfit);

}

return Profit;



}
int main(){
    int prices[] = {23,34,45,56,67,78};

    int result = maxProfit(prices , 6);
    cout<<result;
    return 0;
}