/*
prime number = 2 ,3 ,5 ,7, 11, 13,19
non prime = 4, 6, 8, 9, 10
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime=true;
    cout<<"Enter the number :";
    cin>> n;
    for(int i=2; i<=(n-1); i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<" the number is prime"<<endl;
    }else{
        cout<<"non prime ";
    }
    return 0;
}