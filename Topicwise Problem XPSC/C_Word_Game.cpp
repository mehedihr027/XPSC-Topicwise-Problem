#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> w[3];
    map<string, set<int>> wordC;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string word;
            cin >> word;
            w[i].push_back(word);
            wordC[word].insert(i);
        }
    }
    vector<int> p(3, 0);
    for (auto &pair : wordC)
    {
        int count = pair.second.size();
        if (count == 1)
        {
            p[*pair.second.begin()] += 3;
        }
        else if (count == 2)
        {
            for (int person : pair.second)
            {
                p[person] += 1;
            }
        }
    }
    cout << p[0] << " " << p[1] << " " << p[2] << "\n";
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
