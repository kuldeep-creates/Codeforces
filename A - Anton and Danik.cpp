#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
        return;
    }
    if (a < d)
    {
        cout << "Danik";
        return;
    }
    cout << "Friendship";
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