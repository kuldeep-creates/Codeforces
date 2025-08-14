#include <iostream>
#include <vector>

#include <set>

// #include <map>
// #include <unordered_set>
#include <algorithm>
// #include <climits>
#include <cmath>
// #include<cctype>
using namespace std;

void solve()
{
    int len;
    string s, key = "", keyans, newstring = "";
    cin >> len >> s;
    set<char> chr(s.begin(), s.end());
    for (char i : chr)
    {
        key += i;
    }
    keyans = key;
    sort(key.begin(), key.end());
    reverse(key.begin(), key.end());
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < key.length(); j++)
        {
            if (s[i] == keyans[j])
            {
                newstring += key[j];
            }
        }
    }
    cout << newstring << endl;

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