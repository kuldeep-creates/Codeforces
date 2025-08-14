#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int a, count = 0;
    string b;
    cin >> a >> b;
    for (int i = 0; i < a - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            count++;
        }
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