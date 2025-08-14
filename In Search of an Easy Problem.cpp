#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, num, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a += num;
    }
    if (a > 0)
    {
        cout << "HARD";
        return;
    }

    cout << "EASY";
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