#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0; st<n; st++){  // for start calculation   time complexity O(n)
        for(int end=st; end<n; end++){  // for end                         O(n)
            for(int i=st; i<=end; i++){  // for printing the maximum sub array O(n)
                cout<<arr[i];
            }
            cout<<" ";                               // total time complexity = O(n3)
        }
        cout<<endl;
    }
    return 0;
}