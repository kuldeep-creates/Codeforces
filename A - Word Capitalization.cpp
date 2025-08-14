#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;

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