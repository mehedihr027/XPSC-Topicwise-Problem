#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, string>> input(n);

    for (auto &leaf : input)
    {
        cin >> leaf.first >> leaf.second;
    }
    set<pair<string, string>> lvs;

    for (auto &leaf : input)
    {
        lvs.insert(leaf);
    }
    cout << lvs.size() << endl;

    return 0;
}