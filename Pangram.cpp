#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int names;
    string s;
    cin >> names >> s;
    for (char &i : s)
    {
        i = tolower(i);
    }
    set<char> sl(s.begin(), s.end());
    if (sl.size() == 26)
    {
        cout << "YES";

        return;
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