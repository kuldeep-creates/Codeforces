#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s, n;
    cin >> s >> n;
    if (s.length() != n.length())
    {
        cout << "NO";
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != n[n.size() - 1 - i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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