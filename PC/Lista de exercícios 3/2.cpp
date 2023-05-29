#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    unordered_set<int> estoque;

    vector<pair<int, int>> queries;

    for (int i = 0; i < q; i++)
    {
        int t, m;
        cin >> t >> m;
        queries.push_back(make_pair(t, m));
    }

    for (const auto &query : queries)
    {
        int t = query.first;
        int m = query.second;

        if (query.first == 1)
        {
            estoque.insert(m); 
        }
        else if (query.first == 2)
        {
            if (estoque.count(m) > 0)
            {
                cout << "Sim" << endl; 
            }
            else
            {
                cout << "Nao" << endl; 
            }
        }
    }

    return 0;
}