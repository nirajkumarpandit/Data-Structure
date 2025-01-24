#include <iostream>
using namespace std;
int factiorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int fact_n = factiorial(n);
    int fact_r = factiorial(r);
    int fact_nmr = factiorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}
int main()
{
    int n = 5, r = 2;
    cout << "binomial coefficient :" << ncr(n, r);
    return 0;
}