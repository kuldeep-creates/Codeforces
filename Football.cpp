#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int one = 0, zero = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
            one = 0;
            if (zero >= 7)
            {
                cout << "YES\n";
                return;
            }
        }
        else if (s[i] == '1')
        {
            one++;
            zero = 0;
            if (one >= 7)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO";
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