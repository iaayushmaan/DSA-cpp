#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define loop(o, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

void LCS(string s, string t, int n, int m)
{
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                a[i][j] = 1 + a[i - 1][j - 1];
            else
                a[i][j] = max(a[i - 1][j], a[i][j - 1]);
        }
    }
    // return( n + m - a[n][m]);
    int i = n, j = m;
    string res = "";
    while (i > 0 && j > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            res += s[i - 1];
            i--;
            j--;
        }
        else if (a[i - 1][j] > a[i][j - 1])
        {
            res += s[i - 1];
            i--;
        }
        else
        {
            res += t[j - 1];
            j--;
        }
    }
    while (i > 0)
    {
        res += s[i - 1];
        i--;
    }
    while (j > 0)
    {
        res += t[j - 1];
        j--;
    }
    cout << res << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        LCS("abcdef", "anbd", 6, 4);
    }
    return 0;
}