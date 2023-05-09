#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string cores;
    int atual = 1;
    int anterior = 0;
    int iterador = 0;
    cin >> n;
    cin >> cores;

    for (int i = 0; i < n; i++)
    {
        if (cores[atual] == cores[anterior])
        {
            atual++;
            anterior++;
            iterador++;
        }
        else
        {
            atual++;
            anterior++;
        }
    }
    cout << iterador;
    return 0;
}