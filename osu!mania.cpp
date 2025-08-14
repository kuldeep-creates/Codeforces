#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string temp;
    string a = "#...", b = ".#..", c = "..#.", d = "...#";
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    vector<char> v1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == a)
            v1.push_back('1');
        else if (v[i] == b)
            v1.push_back('2');
        else if (v[i] == c)
            v1.push_back('3');
        else if (v[i] == d)
            v1.push_back('4');
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << v1[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}