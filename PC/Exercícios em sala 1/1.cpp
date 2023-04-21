#include <bits/stdc++.h>

using namespace std;

#define float double

signed main()
{
    long long N;
    float R;
    long long M;
    float P;

    scanf("%lld %lf", &N, &R);
    scanf("%lld %lf", &M, &P);

    float first = R / N;
    float second = P / M;

    if (first <= second)
    {
        printf("Enganacao");
    }
    else
    {
        printf("Promocao");
    }

    return 0;
}