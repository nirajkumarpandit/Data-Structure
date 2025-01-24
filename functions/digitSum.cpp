#include<iostream>
using namespace std;
int digitSum(int num){
    int digitsum=0;
    while(num>0){
       int lastdigit= num%10;
         num /=10;
        digitsum +=lastdigit;
    }
    return digitsum;
}
int main(){
    // int num;
    // cout<<"Enter the number :";
    // cin>>num;
    cout<<digitSum(1);
    return 0;
}