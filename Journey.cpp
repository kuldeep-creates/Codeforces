#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int total = a + b + c;
    int cycles = n / total;
    int remainder = n % total;

    int days = cycles * 3;

    if (remainder > 0)
    {
        if (remainder <= a)
        {
            days += 1;
        }
        else if (remainder <= a + b)
        {
            days += 2;
        }
        else
        {
            days += 3;
        }
    }

    cout << days << endl;
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