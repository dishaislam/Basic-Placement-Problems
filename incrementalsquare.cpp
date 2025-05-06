#include <iostream>
using namespace std;
int main()
{
    int n = 3, m = 1; // size of square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m;
            m++;
        }
        cout << endl;
    }
}