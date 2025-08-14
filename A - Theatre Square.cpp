#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long number_of_flagstones_length = (n + a - 1) / a;
    long long number_of_flagstones_width = (m + a - 1) / a;
    long long total_number_of_flagstones = number_of_flagstones_length * number_of_flagstones_width;
    cout << total_number_of_flagstones << endl;
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