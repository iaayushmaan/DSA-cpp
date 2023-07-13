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

double multiply(double num, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
        ans = ans * num;
    return ans;
}

void getNthRoot(int n, int m)
{
    double l = 1, h = m;
    double eps = 1e-6;
    while ((h - l) > eps)
    {
        double mid = (l + h) / 2.0;
        if (multiply(mid, n) < m)
            l = mid;
        else
            h = mid;
    }
    cout << l << " " << h << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        getNthRoot(n, m);
    }
    return 0;
}