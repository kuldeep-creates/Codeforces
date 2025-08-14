#include <iostream>
using namespace std;

void solve()
{
    string s, t;
    int count = 1, z = 0;
    cin >> s >> t;

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[z])
        {
            z++;
            count++;
        }
    }
    cout << count;
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