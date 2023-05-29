#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> saco;
    int maior_peso = 0;

    while (n--)
    {
        char c;
        int x;
        cin >> c >> x;

        if (c == 'A')
        {
            saco.push(x);
            if (x > maior_peso)
            {
                maior_peso = x;
            }
        }
        else if (c == 'R')
        {
            if (saco.top() == maior_peso)
            {
                saco.pop();
                if (!saco.empty())
                {
                    maior_peso = saco.top();
                }
                else
                {
                    maior_peso = 0;
                }
            }
            else
            {
                saco.pop();
            }
        }
        else if (c == 'V')
        {
            cout << maior_peso << endl;
        }
    }

    return 0;
}
