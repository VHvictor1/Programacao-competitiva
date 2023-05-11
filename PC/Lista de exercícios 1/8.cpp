#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    int n, p1, p2;
    int x, y, preco;
    scanf("%d %d %d", &n, &p1, &p2);
    int menorCusto = 10000;
    pair<int, int> menorPar;
    int menorIndex;

    vector<pair<pair<int, int>, int>> restaurantes;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &preco);
        restaurantes.push_back(make_pair(make_pair(x,y),preco));
    }

    for(int i=0; i<restaurantes.size(); i++){
        int res = (abs(restaurantes.at(i).first.first - p1) + abs(restaurantes.at(i).first.second - p2)) * 2 + restaurantes.at(i).second;
        if (res < menorCusto)
        {
            menorPar = restaurantes.at(i).first;
            menorCusto = res;
            menorIndex = i;
        }
    }
    printf("%d %d\n", menorCusto, menorIndex + 1);

    return 0;
}