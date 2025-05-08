#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n != 0)
        return n * factorial(n - 1);
    else
        return 1;
}
int main()
{
    cout << " Enter the value of n and r:" << endl;
    int n, r;
    cin >> n >> r;
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "The value of nCr is:" << nCr << endl;
}
