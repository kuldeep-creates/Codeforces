#include <iostream>
#include <vector>

#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << count(s.begin(), s.end(), '1') << endl;
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
