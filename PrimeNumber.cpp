#include <iostream>
using namespace std;
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
        else
            return 1;
    }
}
int main()
{
    cout << " Enter a number: ";
    int n;
    cin >> n;
    bool prime = isPrime(n);
    if (prime == 1)
        cout << n << " is a prime number" << endl;
    else
        cout << n << "is not a prime number" << endl;
    return 0;
}