#include <iostream>
using namespace std;

void solve()
{
    int x = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string type;
        cin >> type;
        if (type == "X++")
        {
            x++;
        }
        if (type == "X--")
        {
            x--;
        }
        if (type == "++X")
        {
            ++x;
        }
        if (type == "--X")
        {
            --x;
        }
    }
    cout << x;
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