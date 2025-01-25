#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size]={5,7,1,89,-3};
    int index;
    int smallest=INT16_MAX;
    int largest=INT16_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i]<smallest){
        //     smallest=arr[i];
        //     index=i;
        // }
        smallest=min(arr[i],smallest);
        index=i;
        largest=max(arr[i],largest);
    }
    cout<<"smallest number is :"<<smallest<<" index is :"<<index<<endl;
     cout<<"largest number is :"<<largest<<endl;
    return 0;
}