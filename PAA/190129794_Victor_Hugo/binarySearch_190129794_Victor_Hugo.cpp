#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

long long int binarySearch(vector<long long int> &array, long long int begin, long long int end, long long int number)
{
    long long int posicao = -1;
    while (begin <= end)
    {
        long long int middle = (begin + end) / 2;
        if (array[middle] == number)
        {
            posicao = middle;
            end = middle - 1;
        }
        else if (array[middle] < number)
        {
            begin = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return posicao;
}

int main()
{
    long long int info1, info2;
    vector<long long int> array;
    vector<long long int> resposta;

    scanf("%lld %lld", &info1, &info2);

    for (long long int m = 0; m < info1; m++)
    {
        long long int value;
        scanf("%lld", &value);
        array.push_back(value);
    }

    for (long long int t = 0; t < info2; t++)
    {
        long long int value;
        scanf("%lld", &value);
        long long int size = array.size() - 1;
        long long int result = binarySearch(array, 0, size, value);
        resposta.push_back(result);
    }

    for(long long int p = 0; p < resposta.size(); p++){
        printf("%lld\n", resposta[p]);
    }

    return 0;
}