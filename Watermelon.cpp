#include <iostream>
#include <vector>
// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    if ((n - 2) != 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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