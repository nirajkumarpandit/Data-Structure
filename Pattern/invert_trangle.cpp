
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter star number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) //space
        {
            cout << " ";
        }
        for (int j = 1; j <= n-i+1; j++)  //star
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}