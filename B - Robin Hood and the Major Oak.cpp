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
    cin >> n >> k;
    int sum = k * ((2 * n) - k + 1) / 2;
    if (sum & 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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