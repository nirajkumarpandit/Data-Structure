#include<iostream>
using namespace std;
double power(int n, double x){
    if(n==0) return 1.0;   // power 0 ho to
    if(x==0) return 0.0;   
    if(x==1) return 1.0;
    if(x== -1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;
    int binform=n;
    if(n<0){     // power -ve ho to 
        x=1/x;          
        binform = -binform;
    }
    double ans=1;   
    while(binform > 0){
        if(binform%2 == 1){    // jab binary form me 1 ho to answer me calculate ho
            ans *=x;
        }
        x *=x;     // 
        binform /=2; // binary form ko right sift karne ke liye
    }
    return ans;  //final value store karega
}
int main(){
   cout<< power(2,2);

    return 0;
}