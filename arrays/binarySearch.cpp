#include<iostream>
using namespace std;


int findInd(int arr[] , int n ,int key){
int st = 0;
int end = n-1;
while(st<=end){
    int mid = (st+end)/2;
    if(arr[mid] == key ){
        return mid;
    } else if(arr[mid]>key){
         end = mid -1;
    }else{
        st = mid +1;
    }
}
 return -1;

}



int main(){
    int arr1[] = {2,4,6,8,10,12,14,16,18,20};
    int arr2[] = {3,6,9,12,15,18,21,24,27,30};
    
  cout<<findInd(arr1 , 10,18)<<endl;
  cout<<findInd(arr2 , 10 , 9);

 return 0;


}