#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    multiset<long long int> v;
    multiset<long long int> v2;

    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.insert(x);
    }

    for (int i = 0; i < n - 1; i++)
    {
        long long int x;
        cin >> x;
        v2.insert(x);
        int aux = v.count(x);
        if (aux == 1)
            v.erase(x);
        else
        {
            v.erase(x);
            aux--;
            while (aux--)
            {
                v.insert(x);
            }
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        long long int x;
        cin >> x;
        int aux = v2.count(x);
        if (aux == 1)
            v2.erase(x);
        else
        {
            v2.erase(x);
            aux--;
            while (aux--)
            {
                v2.insert(x);
            }
        }
    }

    cout << *v.begin() << endl
         << *v2.begin();

    return 0;
}