#include <iostream>
// #include <vector>
#include <set>

// #include <map>
// #include <unordered_set>
// #include <algorithm>
// #include <climits>
#include <cctype>
using namespace std;

void solve()
{
    string A1, newx = "";
    cin >> A1;
    for (int i = 0; i < A1.length() - 2; i++)
    {
        newx += A1[i];
    }
    cout << newx + "i" << endl;

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