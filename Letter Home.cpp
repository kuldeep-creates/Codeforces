#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    int s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    if (s <= v[0])
    {
        cout << v.back() - s << endl;
    }
    else if (s >= v.back())
    {
        cout << s - v[0] << endl;
    }
    else
    {
        count += max(s - v[0], v.back() - s);
        count += min(s - v[0], v.back() - s) * 2;
        cout << count << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}