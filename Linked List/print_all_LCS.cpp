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

int f(string s, string t, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;

    int match = 0;
    if (s[i] == t[j])
    {
        return 1 + f(s, t, i - 1, j - 1, dp);
    }

    if (dp[i][j] != -1)
        return dp[i][j];

    int not_match = 0 + max(f(s, t, i - 1, j, dp), f(s, t, i, j - 1, dp));
    return dp[i][j] = not_match;
}

int longestCommonSubsequence(string s, string t)
{
    int m = s.size();
    int n = t.size();
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, -1));
    return f(s, t, m - 1, n - 1, dp);
}

void g(string &s, string &t, int i, int j, string &temp, vector<string> &ans, int cnt, unordered_set<string> &st)
{
    if (cnt == 0)
    {
        if (st.find(temp) == st.end())
        {
            st.insert(temp);
            ans.push_back(temp);
        }

        return;
    }

    int n = s.size();
    int m = t.size();

    if (i >= n || j >= m)
        return;

    for (int row = i; row < n; row++)
    {
        for (int col = j; col < m; col++)
        {
            if (s[row] == t[col])
            {
                temp.push_back(s[row]);
                g(s, t, row + 1, col + 1, temp, ans, cnt - 1, st);
                temp.pop_back();
            }
        }
    }
}

vector<string> all_longest_common_subsequences(string s, string t)
{
    // Code here
    vector<string> ans;
    unordered_set<string> st;

    int subseq_len = longestCommonSubsequence(s, t);

    string temp = "";
    g(s, t, 0, 0, temp, ans, subseq_len, st);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        vector<string> v;
        v = all_longest_common_subsequences("aabacd", "aacdbc");
        for (auto &i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}