#include <iostream>
#include <vector>

// #include <set>

// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
// #include <cmath>
// #include<cctype>
using namespace std;

void solve()
{
    int number, x, c1 = 0, c2 = 0;
    cin >> number;
    vector<int> arr;
    for (int i = 0; i < number; i++)
    {
        cin >> x;
        if (x & 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        arr.push_back(x);
    }

    if (c1 == arr.size() || c2 == arr.size())
    {
        cout << "YES\n";
        return;
    }

    c1 = 0;

    c2 = 0;

    vector<int> copyarr = arr;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i & 1)
        {
            arr[i] = arr[i] + 1;
        }
    }

    for (int i = 0; i < copyarr.size(); i++)
    {
        if ((i & 1) == 0)
        {
            copyarr[i] = copyarr[i] + 1;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] & 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    if (c1 == arr.size() || c2 == arr.size())
    {
        cout << "YES\n";
        return;
    }

    c1 = 0;

    c2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (copyarr[i] & 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    if (c1 == arr.size() || c2 == arr.size())
    {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
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