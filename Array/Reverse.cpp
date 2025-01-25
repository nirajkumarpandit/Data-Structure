#include<iostream>
using namespace std;
int Reverse(int arr[],int sz){
    int st=0; //start pointer
    int end=sz-1; //end pointer
    while(st<end){   //when start is less then end 
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main(){
    int sz=5;
    int arr[sz]={9,6,2,5,8};
    Reverse(arr,sz);     // call the function
    // print the array element
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}