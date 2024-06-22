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
    idx++;
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & (-idx);
    }
}

int query(int idx)
{
    int ans = 0;
    idx++;
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
        bit = vector<int>(n + 1, 0);
        vector<int> a(n);
        int u;
        cin >> u;
        while (u--)
        {
            int l, r, inc;
            cin >> l >> r >> inc;
            update(l, inc);
            update(r + 1, -inc);
        }
        int q;
        cin >> q;
        while (q--)
        {

            int idx;
            cin >> idx;
            int ans = query(idx);
            cout << ans << endl;
        }
    }
    return 0;
}

/*
Sample Input
1
5 3
0 1 7
2 4 6
1 3 2
3
0
3
4
*/
