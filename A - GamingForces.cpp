#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, r, k = 0;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        nums.push_back(r);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1 && nums[i + 1] == 1)
        {
            k++;
            i++;
        }
        else
        {
            k++;
        }
    }
    cout << k << endl;
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