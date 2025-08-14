#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << "NO" << endl;
        return;
    }
    if ((n - k) % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

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