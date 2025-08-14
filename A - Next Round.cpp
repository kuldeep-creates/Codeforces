#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k, num;
    cin >> n >> k;
    vector<int> nums;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0 && nums[i] >= nums[k - 1])
        {
            count++;
        }
    }
    cout << count;

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}