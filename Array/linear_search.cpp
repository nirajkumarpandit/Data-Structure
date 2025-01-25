#include<iostream>
using namespace std;
int Linear_search(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size=5;
    int arr[size]={9,30,85,7,2};
    int target=20;
    cout<<"the elment is "<<Linear_search(arr,size,target);
    return 0;
}