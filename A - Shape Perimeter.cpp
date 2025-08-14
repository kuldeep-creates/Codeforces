#include <iostream>
#include <vector>

// #include <set>

// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
// #include <cmath>
// #include<cctype>
using namespace std;

void solve()
{
    int n, m, r1, r2;
    cin >> n >> m >> r1 >> r2;
    int sum = 0, k;
    for (int i = 0; i < n * 2 - 2; i++)
    {
        cin >> k;
        sum += k;
    }
    cout << 2 * (m * 2 + sum) << endl;

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