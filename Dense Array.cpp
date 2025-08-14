#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, r, k, count = 0;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        nums.push_back(r);
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int mn = min(nums[i], nums[i + 1]);
        int mx = max(nums[i], nums[i + 1]);
        while (mn * 2 < mx)
        {
            count++;
            mn *= 2;
        }
    }

    cout << count << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}