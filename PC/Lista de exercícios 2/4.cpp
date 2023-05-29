#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qtdCaminhoes, qtdCaixasI, qtdPorCaixa;
    vector<int> garrafasDoCaminhao;
    vector<int> funcao;
    queue<pair<int, int>> execucao;
    int v = 0;
    int temp;

    // a fim de testes
    int cam = 0;

    cin >> qtdCaminhoes >> qtdCaixasI >> qtdPorCaixa;
    for (int i = 0; i < qtdCaminhoes; i++)
    {
        cin >> temp;
        garrafasDoCaminhao.push_back(temp);
    }
    for (int i = 0; i < qtdCaminhoes; i++)
    {
        int u;
        cin >> u;
        funcao.push_back(u);
    }

    for (int i = 0; i < qtdCaminhoes; i++)
    {
        execucao.push(make_pair(garrafasDoCaminhao[i], funcao[i]));
    }

    while (!execucao.empty())
    {
        if (execucao.front().second == 0)
        {
            v += execucao.front().first;
            cout << "entrou" << v <<endl;
            if (v >= qtdPorCaixa)
            {
                qtdCaixasI += (v / qtdPorCaixa);
            }
             execucao.pop();
        }
        else
        {
            if (qtdCaixasI <= (execucao.front().first / qtdPorCaixa))
            {
                cout << "retirou" << endl;
                qtdCaixasI = 0;
            }
            else
            {
                cout << "retirou" << endl;
                qtdCaixasI -= (execucao.front().first/qtdCaixasI);
            }
             execucao.pop();
        }
    }

    cout << (qtdCaixasI) << v << endl; 

    return 0;
}
