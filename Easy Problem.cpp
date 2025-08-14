#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, k = 0;
    cin >> n;
    for (b = 1; b < n; b++)
    {
        a = n - b;
        k++;
    }
    cout << k << endl;
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