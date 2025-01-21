/*
bahr ek variable le ke use print and update karte raho 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 
*/


#include<iostream>
using namespace std;
int main(){
    int n; 
    int num=1;
    cout<<"Enter the no :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}