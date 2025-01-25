#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,4,3,6,2};// size of vector is 5
    // print the valuue using for each loop
    for (int val: vec){
        cout<<val;
    }
    return 0;
}