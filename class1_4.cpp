#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(void)
{
    int n;
    cout << "enter the number of rows\n";
    cin >> n;
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = n - i; j > 0; j--)
        {
            cout <<" ";
        }
        for (k = 0; k <= i; k++)
        {
            cout << nCr(i, k)<<" ";
          
        }
        cout << "\n";
    }
    return 0;
}