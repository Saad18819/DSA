#include<iostream>
using namespace std;
 
int trap(int *height , int n){
    int leftMax[20000], rightMax[20000]; // leetcode me n ki max limit di thi and then we can initialise leftMax[n] like this coz error dega compiler bass max se initialise kar diya ki isse bada toh kuch hoga nhi
leftMax[0] = height[0];
rightMax[n-1] = height[n-1];

for(int i = 1; i<n;i++){
    leftMax[i] = max(height[i-1], leftMax[i-1]);

}

for(int i = n-2; i>=0;i--){
    rightMax[i] = max(height[i+1], rightMax[i+1]);

}

int waterTrapped = 0;

for(int i= 0;i<n;i++){
    int waterLevel = min(leftMax[i], rightMax[i]) - height[i];
    if(waterLevel > 0){
    waterTrapped += waterLevel;
    }
}
return waterTrapped;

}

int main(){
    int height[] = {4,2,0,6,3,2,5};
    int paniJama = trap(height , 7);
    cout<<paniJama;
    return 0;
}