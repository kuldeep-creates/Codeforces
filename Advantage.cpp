#include <iostream>
#include <vector>

#include <set>

// #include <map>
// #include <unordered_set>
#include <algorithm>
// #include <climits>
#include <cmath>
// #include<cctype>
using namespace std;

void solve()
{
    int n, k;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        numbers.push_back(k);
    }
    vector<int> nums = numbers;
    sort(numbers.begin(), numbers.end());
    int num1 = numbers[n - 1];
    int num2 = numbers[n - 2];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != num1)
        {
            cout << nums[i] - num1 << " ";
        }
        else
        {
            cout << nums[i] - num2 << " ";
        }
    }
    cout << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}