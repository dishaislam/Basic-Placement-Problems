#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int sumofPrime(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    cout << " Enter a number: ";
    int n;
    cin >> n;
    int sum = sumofPrime(n);
    cout << "Sum of prime numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}