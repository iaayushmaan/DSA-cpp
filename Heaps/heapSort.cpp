#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &a, int n, int i)
{
    int node = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[node] < a[left])
    {
        node = left;
    }
    if (right < n && a[node] < a[right])
    {
        node = right;
    }
    if (node != i)
    {
        swap(a[node], a[i]);
        heapify(a, n, node);
    }
}

void heapSort(vector<int> &a, int n)
{
    int size = n - 1;
    while (size > 0)
    {
        swap(a[size], a[0]);
        size--;
        heapify(a, size, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n / 2; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    heapSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}