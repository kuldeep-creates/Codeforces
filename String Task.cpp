#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string b, n = "";
    cin >> b;
    for (char &i : b)
    {
        i = tolower(i);
    }
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < b.length(); i++)
    {
        bool k = true;
        for (int j = 0; j < 6; j++)
        {
            if (b[i] == v[j])
            {
                k = false;
                break;
            }
        }
        if (k == true)
        {
            n += '.';
            n += b[i];
        }
    }
    cout << n;

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