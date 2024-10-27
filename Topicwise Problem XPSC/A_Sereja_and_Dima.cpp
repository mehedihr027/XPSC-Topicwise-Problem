#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int sereja = 0,dima = 0;
    int i = 0, j = n - 1;
    int move = 0;
    while (i <= j)
    {
        int t;
        if (c[i] >= c[j])
        {
            t = c[i++];
        }
        else
        {
            t = c[j--];
        }

        if (move % 2 == 0)
        {
            sereja += t;
        }
        else
        {
            dima += t;
        }
        move++;
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}