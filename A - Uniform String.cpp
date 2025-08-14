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
    string s = "";
    int n, k, prm = 0;
    cin >> n >> k;
    while (prm <= n)
    {
        for (int i = 1; i <= k; i++)
        {
            s += char(96 + i);
            prm++;
            if (prm >= n)
            {
                cout << s << endl;
                return;
            }
        }
    }
    cout << s << endl;
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
