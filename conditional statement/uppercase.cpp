 // ****** First method ******

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the charecter name :";
//     cin>>ch;
//     if(ch >='a' && ch <='z'){ //lower case condition
//         cout<<"Lower case";
//     }
//     else{
//         cout<<"upper case ";
//     }
//     return 0;
// }

// ***** second method******

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character name :";
    cin>> ch;
    if(ch>=65 && ch<=90){
        cout<<"Upper case ";
    }else{
        cout<<"Lower case";
    }
    return 0;
}