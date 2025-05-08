#include <iostream>
using namespace std;
int main()
{
    int digitsum = 0, num, last_digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    while (num > 0)
    {
        last_digit = num % 10;
        num = num / 10;
        digitsum += last_digit;
    }
    cout << "Sum of digits: " << digitsum <<endl;
}