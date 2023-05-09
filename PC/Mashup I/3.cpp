#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    vector<int> tempos(n);
    vector<int> final(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tempos[i];
        final.at(i) = tempos.at(i);
    }
    sort(tempos.begin(), tempos.end());
    vector<int>::iterator lb;
    while (x < n)
    {
        lb = lower_bound(tempos.begin(), tempos.end(), final[x]);
        cout << (lb - tempos.begin()) + 1 << ' ';
        x++;
    }

    return 0;
}