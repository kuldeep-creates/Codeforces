
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

void solve()
{
    int n, k, s;
    cin >> n >> k >> s;
    if ((k - s) % 2)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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