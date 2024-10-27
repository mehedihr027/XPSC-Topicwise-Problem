#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = n, right = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            left = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            right = i;
            break;
        }
    }
    cout << right - left + 1 << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}