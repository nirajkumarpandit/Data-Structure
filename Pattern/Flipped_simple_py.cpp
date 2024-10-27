//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the star number :";
    cin >> n;
    for (int i = 0; i < n; i++)  // row
    {
        for (int j = 0; j < n - i +-1; j++)   // space 
        {
            cout << " ";
        }
        for (int j =0; j <i+1; j++)  //star
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}