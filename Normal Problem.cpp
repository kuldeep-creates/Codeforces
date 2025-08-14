#include <iostream>
#include <vector>
// #include <set>

// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
using namespace std;

void solve()
{
    string k;
    cin >> k;
    vector<char> s(k.begin(), k.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p')
        {
            s[i] = 'q';
        }
        else if (s[i] == 'q')
        {
            s[i] = 'p';
        }
        else
        {
            continue;
        }
    }
    string l = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        l += s[i];
    }
    cout << l << endl;
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