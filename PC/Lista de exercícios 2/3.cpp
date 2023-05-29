#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qtd;
    int valor;
    char letra;
    stack<int> saco;
    vector<int> aux;

    cin >> qtd;

    for (int i = 0; i < qtd; i++)
    {
        cin >> letra >> valor;
        if (letra == 'A')
        {
            saco.push(valor);
            aux.push_back(valor);
        }
        else if (letra == 'R')
        {
            auto atual = find(aux.begin(), aux.end(), saco.top());
            aux.erase(atual);
            saco.pop();
        }
        else
        {
            if (aux.empty())
            {
                cout << 0 << endl;
            }
            else
            {
                auto it = max_element(aux.begin(), aux.end());
                cout << *it << endl;
            }
        }
    }

    return 0;
}