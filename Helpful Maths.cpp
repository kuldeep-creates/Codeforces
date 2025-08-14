#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    string s, news = "";
    cin >> s;
    vector<char> ss;
    for (int i = 0; i < s.length(); i++)
    {
        if ((i & 1) == 0)
        {
            ss.push_back(s[i]);
        }
    }
    sort(ss.begin(), ss.end());
    for (int i = 0; i < ss.size(); i++)
    {
        if (i != ss.size() - 1)
        {
            news += ss[i];
            news += '+';
        }
        else
            news += ss[i];
    }
    cout << news;

    return;
}
