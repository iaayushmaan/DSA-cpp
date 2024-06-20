#include <bits/stdc++.h>
#define ll long long
#define loop(o, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;

vector<int> bit;
int n;

void update(int idx, int val)
{
    idx++; // Increment idx by 1 to match 1-based BIT implementation
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & (-idx);
    }
}

int query(int idx)
{
    int ans = 0;
    idx++; // Increment idx by 1 to match 1-based BIT implementation
    while (idx > 0)
    {
        ans += bit[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bit = vector<int>(n + 1, 0); // Initialize BIT with n+1 elements
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            update(i, a[i]);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int l, r;
                cin >> l >> r;
                int ans = query(r) - query(l - 1); // Adjusted to 0-based indexing
                cout << ans << endl;
            }
            else if (type == 2)
            {
                int idx, val;
                cin >> idx >> val;
                update(idx, val - a[idx]); // Update the difference
                a[idx] = val;
            }
        }
    }
    return 0;
}

/*
Sample Input
1
5
1 2 3 4 5
4
1 0 4
2 2 4
2 0 4
1 0 4
*/
