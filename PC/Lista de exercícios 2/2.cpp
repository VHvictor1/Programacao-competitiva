#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, a, l;
    scanf("%d %d %d", &v, &a, &l);
    int aux;
    int i = 0;
    int total = 0;
    int k = 0;
    int count = 0;
    queue<int> vec;

    while (i < v)
    {
        cin >> aux;
        vec.push(aux);
        i++;
    }

    while (!vec.empty())
    {
        if (a != 1)
        {
            if (vec.front() > l)
            {
                k = 0;
                total += 10;
                vec.push(vec.front() - 2);
                while (k < a)
                {
                    vec.pop();
                    if(vec.empty()){
                        break;
                    }
                    k++;
                }
                count += a - 1;
            }
            else
            {
                k = 0;
                total += 5;
                while (k < a)
                {
                    vec.pop();
                    if(vec.empty()){
                        break;
                    }
                    k++;
                }
                count += a - 1;
            }
        }
        else
        {

            if (vec.front() > l)
            {
                total += 10;
                vec.push(vec.front() - 2);
                vec.pop();
            }
            else
            {
                vec.pop();
                total += 5;
            }
        }
    }

    cout << total + count << endl;

    return 0;
}