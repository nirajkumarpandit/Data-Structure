//     *     
//    * *    
//   * * *   
//  * * * *  
// * * * * * 
//  * * * *  
//   * * *   
//    * *    
//     *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the star number :";
    cin >> n;
    for (int i = 1; i <= n; i++)          //         trangle code
    {
        for (int j = 1; j <= n - i; j++) //space
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)  // star
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)     // invert trangle code
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}