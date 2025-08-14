#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;
    int tmoney = k * w * (w + 1) / 2;

    if ((tmoney - n) < 0)
    {
        cout << 0;
        return;
    }
    cout << tmoney - n;
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