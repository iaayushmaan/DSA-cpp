#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of elemnts in an array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        // cout << i << "for " << curr << j << endl;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
            // cout << i << " while" << arr[i] << " " << arr[j] << endl;
        }
        arr[j + 1] = curr;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}