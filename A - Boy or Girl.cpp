
#include <iostream>
#include <set>
using namespace std;

void solve()
{
    string name;
    cin >> name;
    set<char> names(name.begin(), name.end());
    if (names.size() & 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
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