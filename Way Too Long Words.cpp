#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string n;
    cin >> n;
    if (n.size() <= 10)
    {
        cout << n << "\n";
        return;
    }
    string s = "";
    s += n[0];
    s += to_string(n.size() - 2);
    s += n.back();
    cout << s << "\n";
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