#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    int box;
    int candies;
    vector<int> v;
    int total = 0;
    scanf("%d", &cases);

    while (cases != 0)
    {
        total = 0;
        v.clear();
        scanf("%d", &box);
        while (box != 0)
        {
            scanf("%d", &candies);
            v.push_back(candies);
            box--;
        }
        sort(v.begin(), v.end());
        int j = 1;
        while (v.size() != j)
        {
            if (v[0] < v[j])
            {
                total += v[j] - v[0];
            }
            j++;
        }
        printf("%d\n", total);
        cases--;
    }
    return 0;
}