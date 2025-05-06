#include <iostream>
using namespace std;
int main()
{
    int n = 5,num=1; // size of square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}