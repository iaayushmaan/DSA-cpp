#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows:";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
            cout<<i<<j;
        }
        for (int j = 1; j <= 2 * (r - i); j++)
        {
            cout << " "
                 << " ";
            cout<<i<<j;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
            cout<<i<<j;
        }
        cout << endl;
    }
    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
            cout<<i<<j;
        }
        for (int j = 1; j <= 2 * (r - i); j++)
        {
            cout << " "
                 << " ";
            cout<<i<<j;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " "
                 << "*";
            cout<<i<<j;
        }
        cout << endl;
    }
}