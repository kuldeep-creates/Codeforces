#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a <= b)
    {
        count++;
        a = 3 * a * count;
        b = 2 * b * count;
    }
    cout << count;
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