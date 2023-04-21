#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    int a, b, c, d;
    int value = 0;
    vector<int> result;
    scanf("%d", &cases);

    while (cases != 0)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        value = 0;
        if (a < b)
        {
            value += 1;
        }
        if (a < c)
        {
            value += 1;
        }
        if (a < d)
        {
            value += 1;
        }
        result.push_back(value);
        cases--;
    }

    int j = 0;
    while (result.size() != j)
    {
        printf("%d\n", result[j]);
        j++;
    }

    return 0;
}