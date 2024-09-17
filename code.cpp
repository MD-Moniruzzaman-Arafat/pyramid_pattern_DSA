#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        int number = 1;
        for (int j = 1; j <= i + 1; j++)
        {
            cout << number;
            number += 1;
        }

        int number2 = 1;
        for (int j = i; j >= 1; j--)
        {
            cout << j;
            number2 += 1;
        }
        cout << endl;
    }
    return 0;
}