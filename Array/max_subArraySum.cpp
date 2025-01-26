//Brute force approach

#include<iostream>
using namespace std;
int main(){
    int maximumSum=INT32_MIN;
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0; st<n; st++){  // O(n)
        int current_sum=0;
        for(int end=st; end<n; end++){  // O(n)
            current_sum +=arr[end];
            maximumSum=max(current_sum,maximumSum);  // time complexity =O(n2)
        }
    }
     cout<<maximumSum;
    return 0;
}