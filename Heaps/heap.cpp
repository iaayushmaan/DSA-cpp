#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int a[1001];
    int size = 0;

    void insert(int val)
    {
        size = size + 1;
        int idx = size;
        a[idx] = val;

        while (idx > 1)
        {
            int parent = idx / 2;
            if (a[parent] < a[idx])
            {
                swap(a[parent], a[idx]);
                idx = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteRoot()
    {
        if (size == 0)
        {
            cout << -1 << endl;
            return;
        }
        a[1] = a[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftidx = 2 * i;
            int rightidx = 2 * i + 1;
            if (leftidx < size && a[i] < a[leftidx])
            {
                swap(a[leftidx], a[i]);
                i = leftidx;
            }
            else if (rightidx < size && a[i] < a[rightidx])
            {
                swap(a[rightidx], a[i]);
                i = rightidx;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int a[], int n, int i)
{
    int node = i;
    int left = 2 * i;
    int right = 2 * i + 1;
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

int main()
{
    heap obj;
    obj.insert(10);
    obj.insert(50);
    obj.insert(10);
    obj.insert(20);
    obj.insert(90);
    obj.insert(100);
    obj.insert(80);
    // obj.print();
    // obj.deleteRoot();
    // obj.print();
    // obj.deleteRoot();
    // obj.print();

    int a[6] = {0, 1, 2, 3, 4, 5};
    for (int i = 5 / 2; i > 0; i--)
    {
        heapify(a, 6, i);
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
