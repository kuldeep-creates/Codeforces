
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int len;
    string n;
    cin >> len;
    cin >> n;
    vector<int> size;
    for (int i = 0; i < len; i++)
    {
        size.push_back((n[i] - 'a') + 1);
    }
    int r = size[0];
    for (int i = 1; i < len; i++)
    {
        if (r < size[i])
        {
            r = size[i];
        }
    }
    cout << r << endl;
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