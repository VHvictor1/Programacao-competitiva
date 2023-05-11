#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<tuple<int, int, int>> result;
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            v1.push_back(i);
        }
        else if (v[i] == 2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }
    while (v1.size() != 0 && v2.size() != 0 && v3.size() != 0)
    {
        result.push_back(make_tuple(v1.back(), v2.back(), v3.back()));
        v1.pop_back();
        v2.pop_back();
        v3.pop_back();
    }
 
    printf("%d\n", (int)result.size());
    for (int i = 0; i < result.size(); i++)
    {
        auto [a, b, c] = result[i];
        printf("%d %d %d\n", a + 1, b + 1, c + 1);
    }
    return 0;
}