#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m, k = 0, ans = 0;
    cin >> n >> m;
    vector<string> ch;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ch.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        k += ch[i].length();
        if (m == k)
        {
            ans++;
            cout << ans << endl;
            return;
        }
        if (m < k)
        {
            cout << ans << endl;
            return;
        }
        ans++;
    }
    if (m > k)
    {
        cout << ans << endl;
        return;
    }
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