#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string b, n = "";
    cin >> b;
    int low = 0, up = 0;
    for (char i : b)
    {
        if (i == toupper(i))
        {
            up++;
        }
        else
            low++;
    }
    if (low < up)
    {
        for (char &i : b)
        {
            i = toupper(i);
        }
    }
    else
    {
        for (char &i : b)
        {
            i = tolower(i);
        }
    }
    cout << b;

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