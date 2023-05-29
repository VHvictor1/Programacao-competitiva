#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, a, l;
    scanf("%d %d %d", &v, &a, &l);
    queue<int> vec;
    int x;
    int total = 0;

    while (v > vec.size())
    {
        cin >> x;
        vec.push(x);
    }
    if (a == 1)
    {
        while (!vec.empty())
        {
            if (vec.front() > l)
            {
                total += 10;
                vec.push(vec.front() - 2);
                vec.pop();
            }
            else
            {
                total += 5;
                vec.pop();
            }
        }
    }
    else
    {
        while (!vec.empty())
        {
            if (vec.front() > l)
            {
                total += 10;
                vec.push(vec.front() - 2);
                vec.pop();
            }
            else
            {
                total += 5;
                vec.pop();
            }

            for (int i = 0; i < a - 1; i++)
            {
                if (vec.empty())
                {
                    break;
                }
                else
                {
                    total += 1;
                    vec.pop();
                }
            }
        }
    }

    cout << total << endl;

    return 0;
}