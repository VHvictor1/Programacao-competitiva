
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    string linha;
    int primeira_linha = n + 1, primeira_coluna = m + 1, ultima_linha = -1, ultima_coluna = -1;
    int nozero = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> linha;
        for (int j = 0; j < m; j++)
        {
            if (linha[j] == '1')
            {
                primeira_linha = min(primeira_linha, i);
                ultima_linha = max(ultima_linha, i);
                primeira_coluna = min(primeira_coluna, j);
                ultima_coluna = max(ultima_coluna, j);
                nozero = 1;
            }
        }
    }
 
    int largura = ultima_coluna - primeira_coluna + 1;
    int altura = ultima_linha - primeira_linha + 1;
 
    if (nozero == 0)
    {
        cout << 0 << "x" << 0 << endl;
    }
    else
    {
 
        cout << largura << "x" << altura << endl;
    }
 
    return 0;
}