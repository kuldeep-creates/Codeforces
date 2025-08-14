#include <iostream>
#include <vector>

// #include <set>

// #include <map>
// #include <unordered_set>
#include <algorithm>
// #include <climits>
#include <cmath>
// #include<cctype>
using namespace std;

void solve()
{
    int n, m, score = 0;
    cin >> n;
    vector<int> seq;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        seq.push_back(m);
    }
    sort(seq.begin(), seq.end());
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (seq[i - 1] == seq[i])
        {
            count++;
        }
        else
        {
            if (count >= 2)
            {
                score += floor(count / 2);
                count = 1;
            }
        }
    }
    if (count >= 2)
    {
        score += count / 2;
    }
    cout << score << endl;

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