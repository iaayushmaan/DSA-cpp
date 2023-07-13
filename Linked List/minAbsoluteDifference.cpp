#include <bits/stdc++.h>
using namespace std;
// Absolute difference returner
int Adiff(int a, int b)
{
    if ((a - b) > 0)
        return a - b;
    return b - a;
}
// Solving for least absolute difference assuming 'k' indices apart
int solve(int n, int k, vector<int> &nums)
{
    map<int, int> mp;
    // pre-setting values into map
    for (int i = k; i < n; i++)
        mp[nums[i]]++;
    // 2-Pointer approach
    int l = 0, r = k, ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        /*checking for upper & lower bounded elements as they
        can both lead to the answers from both sides*/
        auto it1 = mp.lower_bound(nums[i]);
        auto it2 = mp.upper_bound(nums[i]);
        // update ans to which one has lower absolute difference
        ans = min(ans, min(Adiff((*it1).first, nums[i]), Adiff((*it2).first, nums[i])));
        mp[nums[r]]--;
        if (mp[nums[r]] == 0)
            mp.erase(nums[r]); // erasing element from right that's no longer valid
        if ((i + 1 - l) >= k)
        { // Adding element from left if it's going to be valid for next iteration
            mp[nums[l]]++;
            l++; // Increment l for next iteration
        }
        r++; // increment r for next deletion
    }
    return ans;
}
int main()
{
    // Test cases for solving function
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, k, x;
        vector<int> nums;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            nums.push_back(x);
        }
        cout << solve(n, k, nums) << "\n";
    }
    return 0;
}

/*
For solve() function:
Time Complexity: O(N*log(N))
Space Complexity: O(N)
*/