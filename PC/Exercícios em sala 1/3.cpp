#include <bits/stdc++.h>

using namespace std;

int main()
{
    int meias;
    int dias;
    int diasfaltantes;
    int contador = 0;
    scanf("%d %d", &meias, &dias);
    while (meias > 0)
    {
        // printf("%d %d %d\n", meias, dias, contador);
        if (diasfaltantes != 0)
        {
            diasfaltantes--;
            meias--;
            contador++;
        }
        else
        {
            diasfaltantes += dias;
            printf("%d\n", contador);
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}