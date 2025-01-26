// kandane's algorithm calculate maximum sub array sum with time complexity = O(n)

#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8}; //O(n)
    int currentSum=0;
    int maxSum=INT16_MIN;
    for(int i=0; i<n; i++){
        currentSum +=arr[i];
        maxSum=max(currentSum, maxSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}